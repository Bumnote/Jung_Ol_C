#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void) {

	char name[101];
	char n;
	int index = -1;
	scanf("%s %c", name, &n);
	for (int i = 0; i < strlen(name); i++) {
		if (name[i] == n) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		printf("%d", index);
	}
	else
		printf("No");

	return 0;
}