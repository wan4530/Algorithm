#include <stdio.h>
int arr[1000];
int main(void) {
	int s, e;
	scanf("%d %d", &s, &e);
	int i = 0, k = 1;
	int sum = 0;
	while (1) {
		for (int j = 0; j < k; j++) {
			arr[i] = k;
			if (i >= s-1) {
				sum+=k;
			}
			i++;
			if (i >= e) {
				break;
			}
		}
		if (i >= e) {
			break;
		}
		k++;
	}
	printf("%d", sum);
	return 0;
}