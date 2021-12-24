#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	int* p = &n;
	scanf("%d", p);
	for (int i = 0; i < *p; i++) {
		printf("*");
	}

	return 0;
}