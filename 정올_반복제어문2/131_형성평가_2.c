#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b;
	int temp = 0;
	scanf("%d %d", &a, &b);
	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	for (int i = a; i <= b; i++) {
		printf("%d ", i);
	}

	return 0;
}
