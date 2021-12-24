#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
int main(void) {

	char a, b;
	scanf("%c %c", &a, &b);
	printf("%d %d", a + b, abs(a - b));

	return 0;
}