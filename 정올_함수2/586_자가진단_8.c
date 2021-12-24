#pragma warning(disable:4996)
#include <stdio.h>
#define TWO(x) ((x)*(x))
#define THREE(x) ((x)*(x)*(x))

int main(void) {

	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("(%d - %d) ^ 2 = %d\n", n1, n2, TWO(n1 - n2));
	printf("(%d + %d) ^ 3 = %d\n", n1, n2, THREE(n1 + n2));

	return 0;
}