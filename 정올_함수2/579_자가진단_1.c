#pragma warning(disable:4996)
#include <stdio.h>
#include <limits.h>

void solution(int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) { 
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(void) {

	int arr[10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	solution(arr, n);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}