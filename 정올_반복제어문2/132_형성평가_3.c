#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a;
	scanf("%d", &a);
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		if (i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);

	return 0;
}