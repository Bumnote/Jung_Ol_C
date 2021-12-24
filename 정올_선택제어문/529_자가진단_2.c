#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);
	int wh = b + 100 - a;
	printf("%d\n", wh);
	if (wh > 0) {
		printf("Obesity");
	}

	return 0;
}