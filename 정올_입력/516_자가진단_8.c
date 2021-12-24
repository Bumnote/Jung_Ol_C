#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double x, y;
	char z;
	scanf("%lf%lf%c", &x, &y, &z);
	printf("%.2f\n%.2f\n%c", x, y, z);

	return 0;
}