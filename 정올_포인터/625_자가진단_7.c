#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {

	int n, index, temp;
	scanf("%d", &n);
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}
	// 내림차순
	for (int i = 0; i < n; i++) {
		int max = INT_MIN;
		for (int j = i; j < n; j++) {
			if (max < *(p + j)) {
				max = *(p + j);
				index = j;
			}
		}
		temp = *(p + i);
		*(p + i) = *(p + index);
		*(p + index) = temp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", *(p + i));
	}

	return 0;
}