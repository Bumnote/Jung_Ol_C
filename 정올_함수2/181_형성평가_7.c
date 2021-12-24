#pragma warning(disable:4996)
#include <stdio.h>
#define PI 3.141592
#define ANSWER(x) ((x)*(x)*(PI))

int main(void) {
	double n;
	printf("radius : ");
	scanf("%lf", &n);
	printf("area = %.3lf", ANSWER(n));

	return 0;
}