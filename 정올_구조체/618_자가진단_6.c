#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

typedef struct Data {
	char name[20];
	int lh;
	double wh;
} student;

void swap(student* a, student* b) {
	student t = *a;
	*a = *b;
	*b = t;
}

void output(student arr[]) {
	for (int i = 0; i < 5; i++) {
		printf("%s %d %.1lf\n", arr[i].name, arr[i].lh, arr[i].wh);
	}
}

int main(void) {

	student num[5];
	for (int i = 0; i < 5; i++) {
		scanf("%s %d %lf", num[i].name, &num[i].lh, &num[i].wh);
	}
	printf("name\n");
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (strcmp(num[i].name, num[j].name) > 0) {
				swap(num[i].name, num[j].name);
			}
		}
	}
	output(num);
	printf("\nweight\n");
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5; j++) {
			if (num[i].wh < num[j].wh) {
				swap(&num[i], &num[j]);
			}
		}
	}
	output(num);

	return 0;
}