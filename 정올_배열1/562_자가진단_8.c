#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[10];
	int sum_even = 0;  
	int sum_odd = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (i % 2 == 0) {
			sum_odd += arr[i];
		}
		else {
			sum_even += arr[i];
		}
	}
	printf("sum : %d\navg : %.1lf", sum_even, (double)sum_odd / 5);

	return 0;
}