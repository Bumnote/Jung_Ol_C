#pragma warning(disable:4996)
#include <stdio.h>

typedef struct Data {
	int lh;
	double wh;
} Body;

int main(void) {

	Body dad, mom, son;
	scanf("%d %lf", &dad.lh, &dad.wh);
	scanf("%d %lf", &mom.lh, &mom.wh);
	son.lh = ((dad.lh + mom.lh) / 2) + 5;
	son.wh = ((dad.wh + mom.wh) / 2) - 4.5;
	printf("height : %dcm\nweight : %.1lfkg", son.lh, son.wh);

	return 0;
}