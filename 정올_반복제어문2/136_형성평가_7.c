#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n; 
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++) {
		printf("%d ", n * i);
	}

	return 0;
}