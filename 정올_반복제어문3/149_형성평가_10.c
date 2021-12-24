#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int what = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			printf("%d ", what);
			what += 2;
			if (what > 10)
				what -= 10;
		}
		printf("\n");
	}
	return 0;
}