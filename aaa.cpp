#include <sys/ioctl.h>
#include <termios.h>
#include <iostream>
#include <unistd.h>
using namespace std;
char get_keyboard();
int main() {
  while(1)
    char a = get_keyboard();
  return 0;
}
char get_keyboard(void) {
  char input;
  struct termios new_settings;
  struct termios stored_settings;
  tcgetattr(0,&stored_settings);
  new_settings = stored_settings;
  new_settings.c_lflag &= (~ICANON);
  new_settings.c_cc[VTIME] = 0;
  tcgetattr(0,&stored_settings);
  new_settings.c_cc[VMIN] = 1;
  tcsetattr(0,TCSANOW,&new_settings);

  input = getchar();

  tcsetattr(0,TCSANOW,&stored_settings);
  return input;
}
