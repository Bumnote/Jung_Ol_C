#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int what = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			printf("%c", 65 + what);
			what += 1;
		}
		printf("\n");
	}

	return 0;
}