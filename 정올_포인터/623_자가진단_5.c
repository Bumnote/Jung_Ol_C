#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double arr[5];
	double* p = arr;
	for (int i = 0; i < 5; i++) {
		scanf("%lf", (p + i));
		printf("%.1lf ", *(p + i));
	}
	
	return 0;
}