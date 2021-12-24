#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num;
	int even = 0;
	int odd = 0;
	while (1) {
		scanf("%d", &num);
		if (num == 0)
			break;

		if (num % 2 == 0)
			even += 1;
		else
			odd += 1;
	}
	printf("odd : %d\neven : %d", odd, even);

	return 0;
}