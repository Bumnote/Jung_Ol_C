#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a, b;
	int temp = 0;
	scanf("%d %d", &a, &b);
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}
	printf("%d", a - b);

	return 0;
}