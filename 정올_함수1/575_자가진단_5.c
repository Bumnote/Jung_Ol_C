#pragma warning(disable:4996)
#include <stdio.h>
int solution(int a, int b) {
	int answer = 1;
	for (int i = 0; i < b; i++) {
		answer *= a;
	}
	return answer;
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d",solution(a, b));

	return 0;
}