#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	// �ּҰ� ���
	// ������ �� ���� ���� �� �� ������ �ϳ��� ���ڸ� ���Ѵ�.
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	printf("%d", min);

	return 0;
}