#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {

	char name[101];
	gets(name);
	int count = 1;
	printf("%d. ", count);
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] != ' ')
			printf("%c", name[i]);
		else {
			printf("\n");
			printf("%d. ", ++count);
		}

	}

	return 0;
}