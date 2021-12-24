#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

	int* p1 = (int*)malloc(sizeof(int));
	int* p2 = (int*)malloc(sizeof(int));
	int* p3 = (int*)malloc(sizeof(int));
	scanf("%d %d", p1, p2);
	*p3 = abs(*p1 - *p2);
	printf("%d", *p3);

	return 0;
}