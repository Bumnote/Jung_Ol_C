#pragma warning(disable:4996)
#include <stdio.h>
typedef struct Data {
	char name[21];
	int lh;
} student;

int main(void) {

	student num[5];
	int min = 500;
	int index;
	for (int i = 0; i < 5; i++) {
		scanf("%s %d", num[i].name, &num[i].lh);
		if (min > num[i].lh) {
			min = num[i].lh;
			index = i;
		}
	}
	printf("%s %d", num[index].name, num[index].lh);


	return 0;
}