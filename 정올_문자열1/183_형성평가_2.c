#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char name[101];
	gets(name);
	for (int i = 0; i < 5; i++) {
		printf("%c", name[i]);
	}


	return 0;
}