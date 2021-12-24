#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	double* p;
	double sum = 0;
	scanf("%d", &n);
	p = (double*)malloc(n * sizeof(double));
	// p 주소에 메모리를 할당
	for (int i = 0; i < n; i++) {
		scanf("%lf", (p + i));
		sum += *(p + i);
		printf("%.2lf ", *(p + i));
	}

	printf("\nhap : %.2lf\navg : %.2lf", sum, sum / n);


	return 0;
}