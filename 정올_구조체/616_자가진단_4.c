#pragma warning(disable:4996)
#include <stdio.h>

typedef struct Data {
	int x, y;
} Tri;

int main(void) {

	Tri p1, p2, p3;
	scanf("%d %d %d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
	printf("(%.1lf, %.1lf)", (double)(p1.x + p2.x + p3.x) / 3, (double)(p1.y + p2.y + p3.y) / 3);


	return 0;
}