#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("sum = %d\n", x + y + z);
	int sum = x + y + z;
	printf("avg = %d", sum / 3);

	return 0; 
}