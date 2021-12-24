#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n, num;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
	}
	double avg = (double)sum / n;
	printf("%.2lf", avg);

	return 0;
}