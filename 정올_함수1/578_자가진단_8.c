#pragma warning(disable:4996)
#include <stdio.h>

void solution(int a, int b) {
	if (a <= b) {
		for (int i = a; i <= b; i++) {
			printf("== %ddan ==\n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %2d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	else {
		for (int i = b; i <= a; i++) {
			printf("== %ddan ==\n", i);
			for (int j = 1; j <= 9; j++) {
				printf("%d * %d = %2d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	solution(a, b);

	return 0;
}