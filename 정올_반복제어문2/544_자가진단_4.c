#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a;
	scanf("%d", &a);
	int sum = 0;
	for (int i = a; i <= 100; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
}