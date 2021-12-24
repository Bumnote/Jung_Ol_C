#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	int n; 
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) {
		for (int j = n - (i + 1); j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}