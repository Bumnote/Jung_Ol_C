#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	double a;
	scanf("%lf", &a);
	int what = (int)a;

	switch (what) {
	case 4:
		printf("scholarship");
		break;
	case 3:
		printf("next semester");
		break;
	case 2:
		printf("seasonal semester");
		break;
	default:
		printf("retake");
	}

	return 0;
}