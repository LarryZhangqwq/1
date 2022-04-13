#include<iostream>
#include<cstring>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
using namespace std;

int main()
{
    
    keypad(stdscr, true);
    getmaxyx(stdscr, row, col);
    //usleep(1100000);
    return 0;
}