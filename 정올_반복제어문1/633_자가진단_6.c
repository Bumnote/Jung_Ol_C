#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int a;
	while (1) {
		printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
		printf("number? ");
		scanf("%d", &a);
		printf("\n");
		switch (a) {
		case 1:
			printf("Seoul\n");
			printf("\n");
			break;
		case 2:
			printf("Washington\n");
			printf("\n");
			break;
		case 3:
			printf("Tokyo\n");
			printf("\n");
			break;
		case 4:
			printf("Beijing\n");
			printf("\n");
			break;
		default :
			printf("none\n");
			break;
		}
		if (a < 1 || a > 4)
			break;
	}

	return 0;
}