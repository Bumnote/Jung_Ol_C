#pragma warning(disable:4996)
#include <stdio.h>
#include <limits.h>

int main(void) {

	int arr[100];
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] != 999) {
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
		}
		else
			break;
	}
	printf("max : %d\nmin : %d", max, min);


	return 0;
}