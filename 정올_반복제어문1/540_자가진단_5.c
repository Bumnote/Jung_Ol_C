#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num;
	while (1) {
		scanf("%d", &num);
		if (num == -1)
			break;

		if (num % 3 == 0) {
			printf("%d\n", num / 3);
		}
		else {
			printf("");
		}
	}

	return 0;
}