#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int n1, n2;
	int* p1, * p2;
	p1 = &n1;
	p2 = &n2;
	scanf("%d %d", p1, p2);
	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
	printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
	printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2);
	printf("%d / %d = %d\n", *p1, *p2, *p1 / *p2);

	return 0;
}