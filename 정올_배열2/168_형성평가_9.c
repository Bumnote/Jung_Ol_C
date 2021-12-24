#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[10][10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		arr[i][0] = 1;
		arr[n - i - 1][i] = 1;
	}
	for (int i = n - 3; i >= 0; i--) {
		for (int j = 1; j <= n - i - 2; j++) {
			arr[i][j] = arr[i + 1][j] + arr[i + 1][j - 1];
		}
	}
	
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			if (x + y < n)
				printf("%d ", arr[y][x]);
		}
		printf("\n");
	}
	return 0;
}