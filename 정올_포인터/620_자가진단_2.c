#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int num;
	int* p;
	p = &num;
	scanf("%d", p);
	printf("%d...%d", *p / 10, *p % 10);

	return 0;
}