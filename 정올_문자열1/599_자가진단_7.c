#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void) {

	char name[101];
	scanf("%s", name);
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] >= 65 && name[i] <= 90)
			printf("%c", name[i]);
		else if (name[i] >= 97 && name[i] <= 122)
			printf("%c", name[i] - 32);
		else
			printf("");
	}

	return 0;
}