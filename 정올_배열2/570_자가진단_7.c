#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		arr[0][i] = 1;
	}
	for (int y = 1; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (x == 0)
				arr[y][x] = arr[y - 1][x];
			else
				arr[y][x] = arr[y - 1][x] + arr[y][x - 1];
		}
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			printf("%d ", arr[y][x]);
		}
		printf("\n");
	}

	return 0;
}