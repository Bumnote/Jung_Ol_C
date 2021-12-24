#pragma warning(disable:4996)
#include <stdio.h>

void solution(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int temp;

	for (int y = 0; y < n - 1; y++) {
		for (int x = y + 1; x < n; x++) {
			if (arr[y] < arr[x]) {
				temp = arr[y];
				arr[y] = arr[x];
				arr[x] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[15];
	solution(arr, n);

	return 0; 
}