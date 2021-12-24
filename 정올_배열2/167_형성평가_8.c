#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[4][2];
	int sum_1[4] = { 0, };
	int sum_2[2] = { 0, };
	int sum = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 2; x++) {
			scanf("%d", &arr[y][x]);
			sum += arr[y][x];
			sum_1[y] += arr[y][x];
			sum_2[x] += arr[y][x];
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("%d ", sum_1[i] / 2);
	}
	printf("\n");
	for (int j = 0; j < 2; j++) {
		printf("%d ", sum_2[j] / 4);
	}
	printf("\n%d", sum/8);



	return 0;
}