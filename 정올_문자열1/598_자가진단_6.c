#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char what;
	while (1) {
		scanf(" %c", &what);
		if ((int)what >= 65 && (int)what <= 90)
			printf("%c\n", what);
		else if ((int)what >= 97 && (int)what <= 122)
			printf("%c\n", what);
		else if ((int)what >= 48 && (int)what <= 57)
			printf("%d\n", what);
		else
			break;
	}

	return 0;
}