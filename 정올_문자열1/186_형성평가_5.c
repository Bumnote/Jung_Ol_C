#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void) {

	char a[101];
	char b[101];
	scanf("%s %s", a, b);
	if (strlen(a) > strlen(b))
		printf("%d", strlen(a));
	else
		printf("%d", strlen(b));

	return 0;
}