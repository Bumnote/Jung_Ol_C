#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int answer = (a++) * (--b);
	printf("%d %d %d", a, b, answer);


	return 0;
}