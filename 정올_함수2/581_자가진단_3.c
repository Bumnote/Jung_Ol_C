#pragma warning(disable:4996)
#include <stdio.h>

void solution(int a, int b, double c, double d) {
	int a1 = (a < 0) ? -a : a;
	int a2 = (b < 0) ? -b : b;
	if (a1 > a2)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	double c1 = (c < 0) ? -c : c;
	double c2 = (d < 0) ? -d : d;
	if (c1 > c2)
		printf("%.2lf\n", d);
	else
		printf("%.2lf\n", c);
}

int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);
	double c, d;
	scanf("%lf %lf", &c, &d);
	solution(a, b, c, d);

	return 0;
}