#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, temp;
	int count = 0; 
	scanf("%d", &n);
	
	// ���� �޸� �Ҵ�
	int* p = (int*)malloc(n * sizeof(int));
	
	// ���� �Է� �ޱ� 
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}
	 
	// �������� �˰��� 
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