#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[10];
	int* p = arr;
	int odd = 0;
	int even = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", (p + i));
		if (*(p + i) % 2 == 0)
			even += 1;
		else
			odd += 1;
	}

	printf("odd : %d\neven : %d", odd, even);

	return 0;
}