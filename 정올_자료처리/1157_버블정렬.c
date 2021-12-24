#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, temp;
	scanf("%d", &n);
	
	// 동적 메모리 할당
	int* p = (int*)malloc(n * sizeof(int));
	
	// 수열 입력받기
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}
	
	// 버블 정렬 알고리즘 구현. 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - 1) -i; j++) {
			if (*(p + j) > *(p + j + 1)) {
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
		for (int k = 0; k < n; k++) {
			printf("%d ", *(p + k));
		}
		printf("\n");
	}
	
	return 0;
}