#pragma warning(disable:4996)
#include <stdio.h>
#define NUMBER 3

int main(void){

	for (int y = 1; y <= NUMBER; y++) {
		for (int x = 1; x <= NUMBER; x++) {
			printf("%d + %d = %d\n", y, x, y + x);
		}
	}

	return 0;
}