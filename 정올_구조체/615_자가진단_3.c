#pragma warning(disable:4996)
#include <stdio.h>

typedef struct Data {
	char name[21];
	int x, y;
} student;

int main(void) {

	student p1, p2;
	int sum1 = 0;
	int sum2 = 0;
	scanf("%s %d %d", p1.name, &p1.x, &p1.y);
	scanf("%s %d %d", p2.name, &p2.x, &p2.y);
	printf("%s %d %d\n", p1.name, p1.x, p1.y);
	printf("%s %d %d\n", p2.name, p2.x, p2.y);
	sum1 = p1.x + p2.x;
	sum2 = p1.y + p2.y;
	printf("avg %d %d", sum1 / 2, sum2 / 2);

	return 0;
}