#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n, temp;
	scanf("%d", &n);
	
	// ���� �޸� �Ҵ� 
	int* p = (int*)malloc(n * sizeof(int));

	// ���� �Է¹ޱ� 
	for (int i = 0; i < n; i++) {
		scanf("%d", (p + i));
	}
	
	// �������� �˰���
	for (int i = 0; i < n-1; i++) {
		// arr[i] arr[i+1] �� ���� ���ϱ� ������ 
		// �ε��� ������ ���� ���� n-1 ���� Ž���ؾ��Ѵ�. 
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