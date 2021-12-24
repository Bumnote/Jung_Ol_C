#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int a;
	int sum = 0;
	int count = 0;
	while (1) {
		scanf("%d", &a);
		sum += a;
		count += 1;
		if (a >= 100)
			break;
	}

	printf("%d\n%.1lf", sum, (double)sum / count);


	return 0;
}