#pragma warning(disable:4996)
#include <stdio.h>

int solution(int arr[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] < 0)
			arr[i] = -arr[i];
		sum += arr[i];
	}
	return sum;
}

int main(void) {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", solution(arr));

	return 0;
}