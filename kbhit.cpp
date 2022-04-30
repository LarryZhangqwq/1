#include "conio.h"
#include <cstdio>
int main() {
	
	//line 328 was annotated for successful compilation
	
	//kbhit()
	while(!kbhit()) {
		printf(")Press a key!\n");
	}
	return 0;
}
