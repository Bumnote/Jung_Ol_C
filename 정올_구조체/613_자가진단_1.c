#pragma warning(disable:4996)
#include <stdio.h>

struct solution {
	char name[21];
	char school[21];
	int year;
};

int main(void) {

	struct solution n;
	scanf("%s %s %d", n.name, n.school, &n.year);
	printf("Name : %s\n", n.name);
	printf("School : %s\n", n.school);
	printf("Grade : %d", n.year);


	return 0;
}