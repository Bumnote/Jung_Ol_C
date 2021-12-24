#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num;
	int sum = 0;
	int count = 0;
	while (1) {
		scanf("%d", &num);
		if (num < 0 || num > 100)
			break;
		sum += num;
		count += 1;
	}
	printf("sum : %d\navg : %.1lf", sum, (double)sum / count);

	return 0;
}