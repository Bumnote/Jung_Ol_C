#pragma warning(disable:4996)
#include <stdio.h>

typedef struct Data {
	char name[101];
	char number[101];
	char address[101];
} student;

int main(void) {

	student p;
	scanf("%s %s %s", p.name, p.number, p.address);
	printf("name : %s\n", p.name);
	printf("tel : %s\n", p.number);
	printf("addr : %s", p.address);
	return 0;
}