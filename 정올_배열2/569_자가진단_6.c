#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5][4];
	int sum = 0; 
	int count = 0;

	for (int y = 0; y < 5; y++) {
		sum = 0;
		for (int x = 0; x < 4; x++) {
			scanf("%d", &arr[y][x]);
			sum += arr[y][x];
		}
		if (sum >= 320) {
			count += 1;
			printf("pass\n");
		}
		else {
			printf("fail\n");
		}
	}

	printf("Successful : %d", count);

	return 0; 
}