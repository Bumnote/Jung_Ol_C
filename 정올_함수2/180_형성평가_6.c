#pragma warning(disable:4996)
#include <stdio.h>
#define NUMBER 7

int main(void) {
	int temp, arr[NUMBER];
	for (int i = 0; i < NUMBER; i++)
		scanf("%d", &arr[i]);

	for (int y = NUMBER - 1; y >= NUMBER - 3; y--)
	{
		for (int x = 0; x < NUMBER - 1; x++)
		{
			if (arr[x] > arr[x + 1])
			{
				temp = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = temp;
			}
		}
	}

	for (int i = 0; i < NUMBER; i++)
		printf("%d ", arr[i]);

	return 0;
}