#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int solution(double a, double b) {
	int answer = 0;
	double temp;
	double a1 = sqrt(a);
	double b1 = sqrt(b);
	if (a1 > b1) {
		temp = a1;
		a1 = b1;
		b1 = temp;
	}

	if (a1 > (int)a1)
		answer = (int)b1 - (int)a1;
	else
		answer = (int)b1 - (int)a1 + 1;

	return answer;
}

int main(void) {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%d",solution(a, b));

	return 0; 
}