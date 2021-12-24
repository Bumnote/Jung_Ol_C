#pragma warning(disable:4996)
#include <stdio.h>

typedef struct solution {
	char school[21];
	int year;
} student;

int main(void) {

	student p1 = { "Jejuelementary",6 };
	student p2;
	scanf("%s %d", p2.school, &p2.year);

	printf("%d grade in %s School\n", p1.year, p1.school);
	printf("%d grade in %s School", p2.year, p2.school);


	return 0;
}