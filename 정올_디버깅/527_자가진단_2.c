#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);
	int what1 = a / b;
	double what2 = (double)a / b;
	printf("%d %.2lf", what1, what2);

	return 0;
}