#include <stdio.h>

int main(void) {

	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0)
			arr[0][i] = 1;
		else
			arr[0][i] = 0;
	}

	for (int y = 1; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (x == 0)
				arr[y][x] = arr[y - 1][x + 1];
			else if (x == 4)
				arr[y][x] = arr[y - 1][x - 1];
			else
				arr[y][x] = arr[y - 1][x - 1] + arr[y - 1][x + 1];
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