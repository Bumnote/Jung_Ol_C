#pragma warning(disable:4996)
#include <stdio.h>

void solution(int n) {
	for (int y = 0; y < n; y++) {
		for (int x = 1; x <= n; x++) {
			printf("%d ", x + n * y);
		}
		printf("\n");
	}

}

int main(void) {
	int n;
	scanf("%d", &n);
	solution(n);

	return 0;
}