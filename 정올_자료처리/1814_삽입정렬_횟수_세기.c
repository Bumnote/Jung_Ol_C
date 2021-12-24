#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, temp;
	int count = 0; 
	scanf("%d", &n);
	
	// 동적 메모리 할당
	int* p = (int*)malloc(n * sizeof(int));
	
	// 수열 입력 받기 
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}
	 
	// 삽입정렬 알고리즘 
	for (int i = 0; i < n - 1; i++) {
		int j = i;
		while (j >= 0 && *(p + j) > *(p + j + 1)) {
			temp = *(p + j);
			*(p + j) = *(p + j + 1);
			*(p + j + 1) = temp;
			j--;
			count += 1;
		}
	}
	printf("%d", count);

	return 0; 
}