#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	a += 100;
	b %= 10;
	printf("%d %d", a, b);


	return 0;
}