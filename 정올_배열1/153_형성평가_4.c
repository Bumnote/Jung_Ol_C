#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[100];
	int count = 0;
	for (int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
			break;
		count += 1;
	}
	if (count >= 3) {
		for (int i = count - 3; i <= count - 1; i++) {
			printf("%d ", arr[i]);
		}
	}
	else {
		for (int i = 0; i <= count-1; i++) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}