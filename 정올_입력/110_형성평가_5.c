#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double x;
	printf("yard? ");
	scanf("%lf", &x);
	printf("%.1lfyard = %.1lfcm", x, x * 91.44);

	// 10.1yard = 923.5cm

	return 0;
}