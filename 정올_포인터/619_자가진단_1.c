#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int n; 
	int* p;

	scanf("%d", &n);
	p = &n;
	printf("0X%p %d", p, *p);

	return 0;
}