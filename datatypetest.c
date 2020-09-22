#include <stdio.h>
#include <windows.h>

int main(void){
	char s[] = "This is a string";
	long int * cp = &s;
	printf("0x%x\n", (DWORD) &cp);
	return 0;
}
