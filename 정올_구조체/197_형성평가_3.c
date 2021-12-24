#pragma warning(disable:4996)
#include <stdio.h>

struct point {
	int x, y;
};

struct rect {
	struct point p1;
	struct point p2;
};

void solution(struct rect a, struct rect b) {
	struct rect answer;
	answer.p1.x = (a.p1.x < b.p1.x) ? a.p1.x : b.p1.x;
	answer.p1.y = (a.p1.y < b.p1.y) ? a.p1.y : b.p1.y;
	answer.p2.x = (a.p2.x > b.p2.x) ? a.p2.x : b.p2.x;
	answer.p2.y = (a.p2.y > b.p2.y) ? a.p2.y : b.p2.y;
	printf("%d %d %d %d", answer.p1.x, answer.p1.y, answer.p2.x, answer.p2.y);
}

int main(void) {
	// �簢�� n1 �� n2
	struct rect n1, n2;

	scanf("%d %d %d %d", &n1.p1.x, &n1.p1.y, &n1.p2.x, &n1.p2.y);
	scanf("%d %d %d %d", &n2.p1.x, &n2.p1.y, &n2.p2.x, &n2.p2.y);
	solution(n1, n2);

	return 0;
}