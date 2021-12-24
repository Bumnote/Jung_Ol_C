#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	int answer = n;
	while (answer < 100) {
		printf("%d ", answer);
		if (answer % 10 == 0)
			break;
		answer += n;
	}


	return 0;
}