#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void) {
	char name[101];
	gets(name);
	int len = strlen(name);
	for (int i = 0; i < len; i++) {
		for (int y = len - (i + 1); y < len; y++) {
			printf("%c", name[y]);
		}
		for (int x = 0; x < len - (i + 1); x++) {
			printf("%c", name[x]);
		}
		printf("\n");
	}

	return 0;
}