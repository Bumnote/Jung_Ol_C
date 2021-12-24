#include <stdio.h>

int main(void) {

	int x = 50;
	double y = 100.12;
	printf("%.2lf * %d = %.lf", y, x, y * x);

	return 0;
}