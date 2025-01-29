#include <stdio.h>

int main(void) {
	int n;
	int sum;
	int max;
	scanf("%d", &n);
	scanf("%d", &sum);
	max = sum;
	for (int i = 0; i < n; i++) {
		int in, out;
		scanf("%d %d", &in, &out);
		if (max < sum + in - out) {
			max = sum + in - out;
		}
		sum = sum + in - out;
		if (sum < 0) {
			max = 0;
			break;
		}
	}
	printf("%d", max);
	return 0;
}