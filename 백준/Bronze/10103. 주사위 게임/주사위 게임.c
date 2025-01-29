#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int chang_score = 100;
	int sang_score = 100;
	for (int i = 0; i < n; i++) {
		int chang;
		int sang;
		scanf("%d %d", &chang, &sang);
		if (chang > sang) {
			sang_score -= chang;
		}
		else if (chang < sang) {
			chang_score -= sang;
		}
	}
	printf("%d\n%d", chang_score, sang_score);
}