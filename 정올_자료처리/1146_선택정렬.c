#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(void) {

	int n; 
	scanf("%d", &n);
	// ���� �޸� �Ҵ�
	int* p = (int*)malloc(n * sizeof(int));
	
	// ���� �Է¹ޱ� 
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}

	// ���� ���� �˰���. 
	int index, min, temp;
	for (int i = 0; i < n - 1; i++) {
		// �� ������ ���� ���� �ʿ䰡 ��� n-1 �� �ϴ� ���̴�.
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

		// �������� ��� 
		for (int i = 0; i < n; i++) {
			printf("%d ", *(p + i));
		}
		printf("\n");
	}

	return 0;
}