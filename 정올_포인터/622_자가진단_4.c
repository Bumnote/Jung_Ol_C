#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5];
	int* p = arr;
	for (int i = 0; i < 5; i++) {
		scanf("%d", (p + i));
		if (i % 2 == 0)
			printf("%d ", *(p + i));
	}

	return 0;
}