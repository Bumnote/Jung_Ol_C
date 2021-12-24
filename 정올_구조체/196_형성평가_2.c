#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
typedef struct Data {
	char name[16];
	char number[16];
	char address[16];
} student;

void output(student c) {
	printf("name : %s\n", c.name);
	printf("tel : %s\n", c.number);
	printf("addr : %s", c.address);
}
void swap(student* a, student* b) {
	student t = *a;
	*a = *b;
	*b = t;
}

int main(void) {

	student num[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s %s %s", num[i].name, num[i].number, num[i].address);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (strcmp(num[i].name, num[j].name) > 0) {
				swap(&num[i], &num[j]);
			}
		}
	}
	output(num[0]);

	return 0;
}