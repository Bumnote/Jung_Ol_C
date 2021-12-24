#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char what;
	scanf("%c", &what);
	for (int i = 1; i <= 20; i++) {
		printf("%c", what);
	}

	return 0;
}