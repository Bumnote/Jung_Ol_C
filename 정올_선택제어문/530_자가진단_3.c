#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int age;
	scanf("%d", &age);
	if (age >= 20) {
		printf("adult");
	}
	else {
		printf("%d years later", 20 - age);
	}

	return 0;
}