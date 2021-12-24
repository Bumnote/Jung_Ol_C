#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[3][5] = {
		{5,8,10,6,4},
		{11,20,1,13,2},
		{7,9,14,22,3}
	};
	
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			printf("%2d   ", arr[y][x]);
		}
		printf("\n");
	}
	
	return 0;
}