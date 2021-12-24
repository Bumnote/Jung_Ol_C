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
	
	// 삽입정렬 알고리즘
	for (int i = 0; i < n-1; i++) {
		// arr[i] arr[i+1] 과 같이 비교하기 때문에 
		// 인덱스 오류를 막기 위해 n-1 까지 탐색해야한다. 
		int j = i;
		while (j >= 0 && *(p + j) > *(p + j + 1)) {
			temp = *(p + j);
			*(p + j) = *(p + j + 1);
			*(p + j + 1) = temp;
			j--;
		}
		for (int k = 0; k < n; k++) {
			printf("%d ", *(p + k));
		}
		printf("\n");
	}

	return 0;
}