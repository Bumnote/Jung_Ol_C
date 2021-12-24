#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num;
	int three = 0;
	int five = 0;
	for (int i = 1; i <= 10; i++) {
		scanf("%d", &num);
		if (num % 3 == 0)
			three += 1;
		if (num % 5 == 0)
			five += 1;
	}
	printf("Multiples of 3 : %d\nMultiples of 5 : %d", three, five);

	return 0;
}