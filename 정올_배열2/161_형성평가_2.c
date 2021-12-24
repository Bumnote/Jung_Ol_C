#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[100];
	int count[11] = { 0, };

	for (int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			break;
		count[arr[i] / 10] += 1;
	}
	for (int x = 10; x >= 0; x--) {
		if (count[x] != 0)
			printf("%d : %d person\n", x * 10, count[x]);
	}


	return 0;
}