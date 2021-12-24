#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int lg, hg;
	double wh;
	char what;

	while (1) {
		printf("Base = ");
		scanf("%d", &lg);
		printf("Height = ");
		scanf("%d", &hg);
		wh = (double)lg * hg / 2;
		printf("Triangle width = %.1lf\n", wh);
		printf("Continue? ");
		scanf(" %c", &what);
		if (what == 'y' || what == 'Y')
			continue;
		else
			break;
	}

	return 0;
}