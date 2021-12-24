#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double avg = (double)(a + b + c) / 3;
	printf("%.1lf", avg);


	return 0;
}