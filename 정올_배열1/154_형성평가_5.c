#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double arr[6];
	double sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	printf("%.1lf", sum / 6);

	return 0;
}