#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void) {

	char name[101];
	int n;
	scanf("%s %d", name, &n);
	if (strlen(name) >= n) {
		for (int i = strlen(name) - 1; i >= strlen(name) - n; i--) {
			printf("%c", name[i]);
		}
	}
	else {
		for (int i = strlen(name) - 1; i >= 0; i--) {
			printf("%c", name[i]);
		}
	}

	return 0;
}