#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	
	char count[26] = { 0, };
	char arr[100];
	for (int i = 0; i < 100; i++) {
		scanf(" %c", &arr[i]);
		if (65 <= (int)arr[i] && (int)arr[i] <= 90)
			count[(int)arr[i] - 65] += 1;
		else
			break;
	}

	for (int i = 0; i < 26; i++) {
		if (count[i]!=0)
			printf("%c : %d\n", i + 65, count[i]);
	}

	return 0;
}