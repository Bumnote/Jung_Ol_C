#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[10];
	int temp;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[j] > arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}