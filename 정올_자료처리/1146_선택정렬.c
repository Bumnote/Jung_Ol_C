#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(void) {

	int n; 
	scanf("%d", &n);
	// 동적 메모리 할당
	int* p = (int*)malloc(n * sizeof(int));
	
	// 수열 입력받기 
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}

	// 선택 정렬 알고리즘. 
	int index, min, temp;
	for (int i = 0; i < n - 1; i++) {
		// 맨 마지막 수는 비교할 필요가 없어서 n-1 로 하는 것이다.
		min = INT_MAX;
		for (int j = i; j < n; j++) {
			if (min > *(p + j)) {
				min = *(p + j);
				index = j;
			}
		}
		temp = *(p + i);
		*(p + i) = *(p + index);
		*(p + index) = temp;

		// 과정마다 출력 
		for (int i = 0; i < n; i++) {
			printf("%d ", *(p + i));
		}
		printf("\n");
	}

	return 0;
}