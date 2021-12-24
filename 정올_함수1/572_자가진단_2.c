#pragma warning(disable:4996)
#include <stdio.h>


void solution(int L) {
	double answer;
	answer = L * L * 3.14;
	printf("%.2lf", answer);
}

int main(void) {
	int L;
	scanf("%d", &L);
	solution(L);

	return 0;
}