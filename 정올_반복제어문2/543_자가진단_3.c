#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0)
			printf("%d ", i);
	}


	return 0;
}