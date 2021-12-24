#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double a;
	scanf("%lf", &a);
	if (a <=50.8) {
		printf("Flyweight");
	}
	else if (a <= 61.23 && a > 50.8) {
		printf("Lightweight");
	}
	else if (a <= 72.57 && a > 61.23) {
		printf("Middleweight");
	}
	else if (a <= 88.45 && a > 72.57) {
		printf("Cruiserweight");
	}
	else {
		printf("Heavyweight");
	}


	return 0;
}