#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = n - (i + 1); k < n; k++) {
			printf("# ");
		}
		printf("\n");
	}

	for (int i = 0; i < n - 1; i++) {   // 0 1
		for (int k = n - (i + 1); k < n; k++) { // 1 2
			printf("  ");
		}
		for (int j = i + 1; j < n; j++) {
			printf("# ");
		}
		printf("\n");
	}

	return 0;
}