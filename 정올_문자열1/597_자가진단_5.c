#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {

	char a[21];
	char b[21];
	scanf("%s %s", a, b);
	printf("%d", strlen(a) + strlen(b));

	return 0;
}