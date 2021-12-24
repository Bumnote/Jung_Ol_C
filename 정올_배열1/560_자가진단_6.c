#pragma warning(disable:4996)
#include <stdio.h>
#include <limits.h>

int main(void) {

	int arr[10];
	int min = INT_MAX;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("%d", min);

	return 0;
}