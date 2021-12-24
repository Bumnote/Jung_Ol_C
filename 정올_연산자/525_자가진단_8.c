#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d", (a > b && a > c), (a == b && b == c));


	return 0;
}