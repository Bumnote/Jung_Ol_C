#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int month;
	scanf("%d", &month);
	switch (month) {
	case 2:
		printf("28");
		break;
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31");
		break;
	default :
		printf("30");
	}

	return 0;
}