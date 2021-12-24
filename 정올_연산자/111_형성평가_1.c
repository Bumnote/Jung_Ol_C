#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int arr[4];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("sum %d\navg %d", sum, sum / 4);

	return 0;
}