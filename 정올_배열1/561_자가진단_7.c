#pragma warning(disable:4996)
#include <stdio.h>
#include <limits.h>

int main(void) {
	int arr[10];
	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 100) {
			if (max < arr[i])
				max = arr[i];
		}
		else {
			if (min > arr[i])
				min = arr[i];
		}
	}
	if (min == INT_MAX)
		min = 100;
	if (max == INT_MIN)
		max = 100;
	printf("%d %d", max, min);


	return 0;
}