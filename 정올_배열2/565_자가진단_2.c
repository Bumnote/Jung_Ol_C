#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int count[10] = { 0, };
	int i;
	while (1) {
		scanf("%d", &i);
		if (i == 0)
			break;
		else {
			count[i / 10] += 1;
		}
	}
	for (int x = 0; x < 10; x++) {
		if (count[x] != 0)
			printf("%d : %d\n", x, count[x]);
	}

	return 0;
}