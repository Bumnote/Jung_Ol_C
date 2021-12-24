#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int arr[20] = { 0, };
	int n;
	int i = 2; 
	scanf("%d", &n);
	arr[0] = 100;
	arr[1] = n;
	
	while (1) {
		arr[i] = arr[i - 2] - arr[i - 1];
		if (arr[i] < 0)
			break;
		i += 1;
	}
	for (int x = 0; x <= i; x++) {
		printf("%d ", arr[x]);
	}

	return 0;
}