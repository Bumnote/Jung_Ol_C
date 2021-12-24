#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int what = 1; 
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = n - i; k < n; k++) {
			printf("  ");
		}
		for (int j = i; j < n; j++) {
			printf("%d ", what++);
		}
		printf("\n");
	}

	return 0;
}