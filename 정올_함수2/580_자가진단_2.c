#pragma warning(disable:4996)
#include <stdio.h>

void solution(int a, int b) {
	if (a >= 0 && a <= 12) {
		if (a == 2 && (b <= 28 && b >= 1)) {
			printf("OK!");
		}
		else if ((a == 4 || a == 6 || a == 9 || a == 11) && (b <= 30 && b >= 1)) {
			printf("OK!");
		}
		else if ((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) && (b <= 31 && b >= 1)) {
			printf("OK!");
		}
		else {
			printf("BAD!");
		}

	}
	else {
		printf("BAD!");
	}
}

int main(void) {
	int month, day;
	scanf("%d %d", &month, &day);
	solution(month, day);

	return 0; 
}