#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int num;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
	}
	double avg = (double)sum / n;
	if (avg >= 80) {
		printf("avg : %.1lf\n", avg);
		printf("pass");
	}
	else {
		printf("avg : %.1lf\n", avg);
		printf("fail");
	}

	return 0;
}