#pragma warning(disable:4996)
#include <stdio.h>

int solution(int n) {
	int answer = 1;
	for (int i = 0; i < n; i++) {
		answer *= 2;
	}
	return answer;
}

int main(void) {

	int n; 
	scanf("%d", &n);
	printf("%d", solution(n));

	return 0;
}