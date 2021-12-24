#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (i % 2 == 0)
			sum += arr[i];
	} 
	printf("%d", sum);

	return 0;
}