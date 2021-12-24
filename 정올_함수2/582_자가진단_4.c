#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

void solution(int n) {
	double wh = n / 3.14;
	double lh = sqrt(wh);
	printf("%.2lf", lh);
}

int main(void) {

	int n;
	scanf("%d", &n);
	solution(n);

	return 0;
}