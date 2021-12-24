#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[4][3];
	int sum[4] = { 0, };
	for (int y = 0; y < 4; y++) {
		printf("%dclass? ", y + 1);
		for (int x = 0; x < 3; x++) {
			scanf("%d", &arr[y][x]);
			sum[y] += arr[y][x];
		}
	}
	for (int i = 0; i < 4; i++) {
		printf("%dclass : %d\n", i + 1, sum[i]);
	}

	return 0;
}