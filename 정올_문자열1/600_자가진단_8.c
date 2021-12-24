#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {

	char name[101];
	int count = 1;
	gets(name);
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] == ' ')
			count += 1;
	}
	printf("%d", count);

	return 0;
}