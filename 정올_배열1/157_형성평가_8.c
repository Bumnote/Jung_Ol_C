#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[100];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] != 0) {
			if (arr[i] % 5 == 0) {
				count += 1;
				sum += arr[i];
			}
		}
		else
			break;
	}
	printf("Multiples of 5 : %d\n",count);
	printf("sum : %d\navg : %.1lf", sum, (double)sum / count);
	return 0;
}