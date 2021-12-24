#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double arr [6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int a, b;
	scanf("%d %d", &a, &b);
	double sum = arr[a - 1] + arr[b - 1];
	printf("%.1lf", sum);

	return 0;
}