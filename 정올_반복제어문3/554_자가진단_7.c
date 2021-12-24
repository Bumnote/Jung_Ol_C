#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	int num = 1;
	char chr = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			printf("%d ", num);
			num += 1;
		}
		for (int k = n - (i + 1); k < n; k++) {
			printf("%c ", chr);
			chr += 1;
		}
		printf("\n");
	}

	return 0;
}