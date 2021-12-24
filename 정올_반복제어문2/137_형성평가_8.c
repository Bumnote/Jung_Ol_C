#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int a, b;
	scanf("%d %d", &a, &b);
	for (int y = 1; y <= a; y++) {
		for (int x = 1; x <= b; x++) {
			printf("%d ", y * x);
		}
		printf("\n");
	}

	return 0;
}