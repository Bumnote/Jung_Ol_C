#pragma warning(disable:4996)
#include <stdio.h>

void solution(int a, char b, int c) {
	if (b == '+')
		printf("%d %c %d = %d", a, b, c, a + c);
	else if (b == '-')
		printf("%d %c %d = %d", a, b, c, a - c);
	else if (b == '*')
		printf("%d %c %d = %d", a, b, c, a * c);
	else if (b == '/')
		printf("%d %c %d = %d", a, b, c, a / c);
	else 
		printf("%d %c %d = %d", a, b, c, 0);
}

int main(void) {
	int a, b;
	char what;
	scanf("%d %c %d", &a, &what, &b);
	solution(a, what, b);

	return 0;
}