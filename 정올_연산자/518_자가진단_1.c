#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a + b + c;
	double avg = sum / 3;
	printf("sum : %d\navg : %d", sum, (int)avg);

	return 0;
}