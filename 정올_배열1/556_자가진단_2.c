#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = (i + 1);
		printf("%d ", arr[i]);
	}

	return 0;
}