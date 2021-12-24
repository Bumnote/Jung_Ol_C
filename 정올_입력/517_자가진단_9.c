#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("%.3lf\n%.3lf\n%.3lf", x, y, z);

	return 0;
}