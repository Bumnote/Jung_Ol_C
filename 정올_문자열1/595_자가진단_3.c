#include <stdio.h>

int main(void) {

	char name[100] = { "Hong Gil Dong" };
	for (int i = 3; i <= 6; i++) {
		printf("%c", name[i]);
	}

	return 0;
}