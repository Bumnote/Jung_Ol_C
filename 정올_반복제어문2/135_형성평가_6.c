#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	int count = 0;
	int temp = 0;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
			count += 1;
		}
	}
	double avg = (double)sum / count;
	printf("sum : %d\navg : %.1lf", sum, avg);

	return 0;
}