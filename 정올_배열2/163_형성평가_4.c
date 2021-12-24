#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[4][3] = {
		{3,5,9},
		{2,11,5},
		{8,30,10},
		{22,5,1}
	};
	int sum = 0;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			sum += arr[y][x];
			printf("%d ", arr[y][x]);
		}
		printf("\n");
	}
	printf("%d", sum);

	return 0;
}