#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	int sum = (int)a + (int)b + (int)c;
	double avg = (a + b + c) / 3;
	printf("sum %d\navg %d", sum, (int)avg);

	return 0;
}