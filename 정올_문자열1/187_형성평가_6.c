#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void) {

	char name[101];
	gets(name);
	int n;
	while (1) {
		if (strlen(name) == 1)
			break;
		scanf("%d", &n);
		getchar();
		if (strlen(name) >= n) {
			for (int i = n - 1; i < strlen(name) + 1; i++) {
				name[i] = name[i + 1];

			}
		}
		else {
			name[strlen(name) - 1] = 0;
		}
		printf("%s\n", name);
	}


	return 0;
}