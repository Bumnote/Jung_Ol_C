#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n - i; j < n; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2 * (n - i)) -1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}