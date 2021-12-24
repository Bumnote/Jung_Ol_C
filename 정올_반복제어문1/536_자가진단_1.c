#include <stdio.h>

int main(void) {

	int a = 1;
	while (1) {
		
		printf("%d ", a);
		a += 1;
		if (a == 16)
			break;
	}

	return 0;
}