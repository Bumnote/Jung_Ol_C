#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

struct Data {
	char name[20];
	int x, y, z;
	int total;
};

void swap(struct Data* a, struct Data* b) {
	struct Data t = *a;
	*a = *b;
	*b = t;
}

int main(void) {

	int n;
	scanf("%d", &n);
	struct Data* p;
	p = (struct Data*)malloc(n * sizeof(struct Data));
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", (p + i)->name, &(p + i)->x, &(p + i)->y, &(p + i)->z);
		(p + i)->total = (p + i)->x + (p + i)->y + (p + i)->z;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if ((p + i)->total < (p + j)->total) {
				swap((p + i), (p + j));
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s %d %d %d %d\n", (p + i)->name, (p + i)->x, (p + i)->y, (p + i)->z, (p + i)->total);
	}
	free(p);

	return 0;
}