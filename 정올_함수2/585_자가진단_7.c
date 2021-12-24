#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[10];
	int temp;
	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &arr[i]);
	}
	for (int y = 0; y < 10; y++) 
	{
		for (int x = 0; x < 9 - y; x++) 
		{
			if (arr[x] < arr[x + 1]) 
			{
				temp = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = temp;
			}
		}
		if (y == 9)
			break;
		for (int i = 0; i < 10; i++) 
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

	return 0;
}