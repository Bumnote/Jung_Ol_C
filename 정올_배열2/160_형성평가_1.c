#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int count[6] = { 0, };
	int n;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		count[n - 1] += 1;
	}
	for (int x = 0; x < 6; x++) {
		printf("%d : %d\n", x + 1, count[x]);
	}

	return 0;
}