#pragma warning(disable:4996)
#include <stdio.h>

void solution() {
	printf("~!@#$^&*()_+|\n");
}

int main(void) {
	int num; 
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		solution();
	}

	return 0;
}