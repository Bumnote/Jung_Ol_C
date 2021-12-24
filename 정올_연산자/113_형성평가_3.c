#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	a += 5;
	b *= 2;
	printf("width = %d\n", a);
	printf("length = %d\n", b);
	printf("area = %d", a * b);

	return 0;
}