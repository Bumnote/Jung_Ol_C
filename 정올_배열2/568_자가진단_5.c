#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	printf("first array\n");
	int arr1[2][4];
	int arr2[2][4];
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 4; x++) {
			scanf("%d", &arr1[y][x]);
		}
	}
	printf("second array\n");
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 4; x++) {
			scanf("%d", &arr2[y][x]);
		}
	}

	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 4; x++) {
			printf("%d ", arr1[y][x] * arr2[y][x]);
		}
		printf("\n");
	}

	return 0;
}