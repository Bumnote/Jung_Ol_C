#pragma warning(disable:4996)
#include <stdio.h>

void solution(int* a, int* b) {
	if (*a < *b) {
		*a = *a * 2;
		*b = *b / 2;
	}
	else {
		*a = *a / 2;
		*b = *b * 2;
	}
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	solution(&a, &b);
	printf("%d %d", a, b);

	return 0;
}