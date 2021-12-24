#pragma warning(disable:4996)
#include <stdio.h>

int solution(int a, int b) {
	int answer;
	if (a < b)
		answer = b * b - a * a;
	else
		answer = a * a - b * b;
	return answer;
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",solution(a, b));

	return 0;
}