#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int arr[20];
	int num;
	int temp;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num-1; i++) {
		for (int j = i + 1; j < num; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}