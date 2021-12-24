#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char sex;
	int age;
	scanf("%c %d", &sex, &age);
	if (sex == 'M') {
		if (age >= 18) {
			printf("MAN");
		}
		else {
			printf("BOY");
		}
	}
	else {
		if (age >= 18) {
			printf("WOMAN");
		}
		else {
			printf("GIRL");
		}
	}


	return 0;
}