#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { // 0 1 2 
		for (int k = 0; k < (2*n-2)-2*i; k++) { //  4 2 0 
			printf(" ");
		}

		for (int j = 1; j <= 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}