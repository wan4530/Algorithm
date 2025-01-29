#include <stdio.h>

int main(void) {
	int n, m, l;
	int arr[50] = { 0 };
	scanf("%d %d %d", &n, &m, &l);
	arr[0]++;
	int total = 0;
	int turn = 0;
	while (arr[turn] != m) {
		if (arr[turn] % 2 == 0) {
			turn -= l;
		}
		else {
			turn += l;
		}
		if (turn < 0) {
			turn += n;
		}
		else if (n - 1 < turn) {
			turn -= n;
		}
		arr[turn]++;
		total++;
	}
	printf("%d", total);
	return 0;
}