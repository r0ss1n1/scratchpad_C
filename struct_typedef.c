#include <stdio.h>
/* Charles Truscott, github.com/r0ss1n1, practice implementing struct, typedef */
typedef struct Person {
	int salary;
	float height;
	char * address;
	char * name;
} Person;

int main(void) {
	Person steve;
	steve.salary = 60000;
	steve.height = 4.5;
	steve.address = "Fort Meade, MD";
	steve.name = "Big Steve the Truck Driver";
	printf("\tSalary: $%d\tHeight: %f ft\tState: %s\tName: %s\n", steve.salary, steve.height, (char *) steve.address, (char *) steve.name);

	return 0;

}