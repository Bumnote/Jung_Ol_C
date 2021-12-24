#pragma warning(disable:4996)
#include <stdio.h>

int solution(int a, int b, int c) {
	return a + b + c;
}

int main(void) {
	int arr[4][4];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	arr[3][3] = 0;
	for (int i = 0; i < 3; i++) {
		arr[i][3] = solution(arr[i][0], arr[i][1], arr[i][2]);
		arr[3][i] = solution(arr[0][i], arr[1][i], arr[2][i]);
		arr[3][3] += arr[i][3];
	}
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			printf("%d ", arr[y][x]);
		}
		printf("\n");
	}
}