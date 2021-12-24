#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int num;
	while (1) {
		printf("ASCII code =? ");
		scanf("%d", &num);
		if (num >= 33 && num <= 127) 
			printf("%c\n", (char)num);
		else 
			break;
	}

	return 0;
}