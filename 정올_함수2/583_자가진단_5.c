#pragma warning(disable:4996)
#include <stdio.h>

void solution(double a, double b, double c) {
	double arr[3] = { a,b,c };
	// 가장 큰 수 n1 (삼항 연산 이용) 
	
	double n1 = (a > b) ? a : b;
	n1 = (n1 > c) ? n1 : c;
	// 가장 작은 수 n2 (삼항 연산 이용)
	
	double n2 = (a > b) ? b : a;
	n2 = (n2 > c) ? c : n2;

	// 중간 값 n3 (n1도 아니고 n2도 아닌 값을 배열을 이용하여 추출)
	double n3;
	for (int i = 0; i < 3; i++) {
		if (arr[i] != n1 && arr[i] != n2)
			n3 = arr[i];
	}
	// n1 > n3 > n2
	
	if (n1 > 0)
		printf("%d ", (int)(n1 + 1));
	else
		printf("%d ", (int)n1);

	if (n2 > 0)
		printf("%d ", (int)n2);
	else
		printf("%d ", (int)(n2 - 1));

	if (n3 > 0)
		printf("%d ", (int)(n3 + 0.5));
	else
		printf("%d ", (int)(n3 - 0.5));
}

int main(void) {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	solution(a, b, c);

	return 0;
}