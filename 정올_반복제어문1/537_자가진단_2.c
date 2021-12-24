#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a;
	scanf("%d", &a);
	int sum = 0;
	while (1) {
		sum += a;
		a -= 1;
		if (a == 0)
			break;
	}
	printf("%d", sum);

	return 0;
}