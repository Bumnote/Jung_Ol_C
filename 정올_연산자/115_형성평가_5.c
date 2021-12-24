#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", a > c && b > d);

	return 0;
}