#include <stdio.h>

/* Practice in C, authored by Charles Truscott @ github.com/r0ss1n1 */

char * returnstring(char * string);
int returnstringlength(char * string);
void editvariables(void);
float performsum(float p, float q, float r, float s);

float p = 3.00;
float q = 3.00;
float r = 0.11;
float s = 0.22;

char string[] = "The sum is ";

int main(void){

	printf("%s%.2f\n", returnstring((char *) string), performsum(p, q, r, s));
	editvariables();
	printf("%s%.2f\n", returnstring((char *) string), performsum(p, q, r, s));

	return 0;
}

int returnstringlength(char * string){

	return string;
}

void editvariables(void){
	printf("Editing %.2f, %.2f, %.2f & %.2f to: ", p, q, r, s);
	p = 2.00;
	q = 4.00;
	r = 0.56;
	s = 0.10;
	printf("%.2f, %.2f, %.2f & %.2f \n", p, q, r, s);
}

float performsum(float p, float q, float r, float s){
	return p + q + r + s;
}

char * returnstring(char * string) {
	return string;
}