#pragma warning(disable:4996)
#include <stdio.h>

void solution(double a, double b, double c) {
	int answer1,answer2;
	double sum;
	answer1 = (int)(((a + b + c) / 3) + 0.5);
	sum = (int)(a + 0.5) + (int)(b + 0.5) + (int)(c + 0.5);
	answer2 = (int)((sum / 3) + 0.5);
	printf("%d\n%d", answer1, answer2);
}

int main(void) {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	solution(a, b, c);

	return 0;
}