#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char arr[3][5];
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			scanf(" %c", &arr[y][x]);
			arr[y][x] = (char)(arr[y][x] + 32);
			printf("%c ", arr[y][x]);
		}
		printf("\n");
	}


	return 0;
}