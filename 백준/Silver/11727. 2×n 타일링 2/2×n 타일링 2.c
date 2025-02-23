#include <stdio.h>
int array[1001];
int main(void) {
	int n;
	scanf("%d", &n);
	array[0] = 1;
	for (int i = 1; i < 1001; i++) {
		if (i % 2 == 0) {
			array[i] = (array[i - 1] * 2 + 1) % 10007;
		}
		else {
			array[i] = (array[i - 1] * 2 - 1) % 10007;
		}
	}
	printf("%d", array[n]);
	return 0;
}