#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[20];
	int sum = 0;
	int count = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
		else {
			sum += arr[i];
			count += 1;
		}
	}
	printf("%d %d", sum, sum / count);

	return 0;
}