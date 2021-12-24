#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a;
	int count = 0;
	while (1) {
		scanf("%d", &a);
		if (a == 0)
			break;

		count += 1;
		if (a % 3 == 0)
			count -= 1;
		if (a % 5 == 0)
			count -= 1;
		if (a % 3 == 0 && a % 5 == 0)
			count += 1;
	}
	printf("%d", count);

	return 0;
}