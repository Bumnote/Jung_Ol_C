#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int num = 0;
	int what = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = i; k < n; k++) {
			printf("%c ", 65 + num);
			num += 1;
		}

		for (int j = n - i; j < n; j++) {
			printf("%d ", what);
			what += 1;
		}
		printf("\n");
	}

	return 0;
}