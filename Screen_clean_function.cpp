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
	for( int i = 0; i < 20; i++ )
	{
		for( int j = 0; j < 20; j++ )
			cout << 1 << " ";
		cout <<endl;
	}
	usleep(100000);
	printf("\033[2J\033[1;1H");
    //usleep(1100000);
    return 0;
}
