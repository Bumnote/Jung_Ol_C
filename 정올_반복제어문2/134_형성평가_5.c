#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num;
	int even = 0; 
	int odd = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		if (num % 2 == 0)
			even += 1;
		else
			odd += 1;
	}
	printf("even : %d\nodd : %d", even, odd);

	return 0;
}