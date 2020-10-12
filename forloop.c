#include <stdio.h>

int main(int argc, char * argv[]){
	int x = 5;

	while(x){
		printf("x is %d\n", x);
		--x;
	}

	for(int x = 5; x; --x) {

		printf("x is %d\n", x);
		
	}

	for(int i = 0; i < 5; ++i){
		printf("i is %d\n", i);
		if(i == 3) {
			printf("reached break\n");
			break;
		}
	}

	int ia[] = { 1, 2, 3, 4, 5, '\0'};
	for (int *ip = ia; *ip; ++ip) {
		printf("The element in the array is %d\n", *ip);

	}
	return 0;
}