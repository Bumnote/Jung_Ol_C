#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	// 최소값 출력
	// 임의의 두 수를 먼저 비교 후 나머지 하나의 숫자를 비교한다.
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	printf("%d", min);

	return 0;
}