#include <stdio.h>
int arr[1000];
int main(void) {
	int s, e;
	scanf("%d %d", &s, &e);
	int i = 0, k = 1;
	int sum = 0;
	while (i<e) {
		for (int j = 0; j < k; j++) {
			arr[i] = k;
			if (i >= s-1 && i<e) {
				sum+=k;
			}
			i++;
		}
		k++;
	}
	printf("%d", sum);
	return 0;
}