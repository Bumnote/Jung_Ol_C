#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double a, b;
	scanf("%lf %lf", &a, &b);
	int what1 = (int)(a * b);
	int what2 = (int)a * (int)b;
	printf("%d %d", what1, what2);

	return 0;
}