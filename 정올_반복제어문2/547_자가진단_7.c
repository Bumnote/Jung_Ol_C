#include <stdio.h>

int main(void) {

	for (int i = 0; i < 5; i++) {
		for (int j = 2; j <= 6; j++) {
			printf("%d ", j + i);
		}
		printf("\n");
	}

	return 0;
}