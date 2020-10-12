#include <stdio.h>

char * retrieve_input(void);

int main(void){
	char array[] = "This is a string.\n";
	for(char * cp = array; *cp ; ++cp) printf("%c", *cp);
	retrieve_input();


}

char * retrieve_input(void){
	int a, b, c;
	printf("Input three integers please: ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Their sum is: %d", a + b + c);

}