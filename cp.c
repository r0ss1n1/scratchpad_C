#include <windows.h>
#include <stdio.h>

int main(int argc, LPSTR argv[]){
	if(!CopyFile(argv[1], argv[2], FALSE)){
		printf("%x\n", GetLastError());
	}
}