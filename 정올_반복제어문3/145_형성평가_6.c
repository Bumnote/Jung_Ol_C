#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = i+1; k < n; k++) {
			printf("  ");
		}
		for (int j = 0; j <= i; j++) {
			printf("%d ", j + 1);
		}
		printf("\n");
	}

	return 0;
}