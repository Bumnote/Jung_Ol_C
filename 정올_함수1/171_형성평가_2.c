#pragma warning(disable:4996)
#include <stdio.h>

int solution(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	return sum;
}

int main(void) {

	int num; 
	scanf("%d", &num);
	printf("%d",solution(num));

	return 0;
}