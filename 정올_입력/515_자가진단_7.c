#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d", x, y, x / y);

	return 0;
}