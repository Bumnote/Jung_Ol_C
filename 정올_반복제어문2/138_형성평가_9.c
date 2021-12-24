#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= n; x++) {
			printf("(%d, %d) ", y, x);
		}
		printf("\n");
	}

	return 0;
}