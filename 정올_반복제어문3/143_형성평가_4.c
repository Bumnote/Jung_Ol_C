#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = n - i; k < n; k++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * (n - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < n; i++) { // 1 2 
		for (int k = i; k < n - 1; k++) { // 1 0 
			printf(" ");
		}
		for (int j = 1; j <= (2 * (i + 1)) -1; j++) { //  3 5 
			printf("*");
		}
		printf("\n");
	}

	return 0;
}