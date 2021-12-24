#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);
	int count = 0;
	int sum = 0;
	int odd = 1;
	while (sum < n) {
		count += 1;
		sum += odd;
		odd += 2;
	}
	printf("%d %d", count, sum);
	return 0;
}