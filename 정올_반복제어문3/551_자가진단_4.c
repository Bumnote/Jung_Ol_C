#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int y = n - i; y < n; y++) {
			printf(" ");
		}

		for (int x = i; x < n; x++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}