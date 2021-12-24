#pragma warning(disable:4996)
#include <stdio.h>
void solution(int a, int b, int c) {
	int n = (a > b) ? a : b;
	int answer = (n > c) ? n : c;
	printf("%d", answer);
}

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	solution(a, b, c);

	return 0;
}