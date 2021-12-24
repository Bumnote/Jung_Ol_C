#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void) {

	int n;
	scanf("%d", &n);
	int max = INT_MIN;
	int min = INT_MAX;
	int* p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", p + i);
		if (max < *(p + i))
			max = *(p + i);
		if (min > *(p + i))
			min = *(p + i);
	}

	printf("max : %d\nmin : %d", max, min);

	return 0;
}