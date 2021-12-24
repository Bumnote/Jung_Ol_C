#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d / %d = %d...%d", a, b, a / b, a % b);

	return 0;
}