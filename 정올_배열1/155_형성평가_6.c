#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char arr[6] = { 'J','U','N','G','O','L' };
	char what;
	int index = -1;
	scanf(" %c", &what);
	for (int i = 0; i < 6; i++) {
		if (arr[i] == what)
			index = i;
	}
	if (index == -1)
		printf("none");
	else 
		printf("%d\n", index);

	return 0;
}