#include <stdio.h>
int main(void) {
	int n, k;
	int a[1000] = { 0 };
	int count = 0;
	scanf("%d %d", &n, &k);
	int c = -1;
	for (int i = 0; i < n; i++) {
		a[i] = i+1;
	}
	printf("<");
	while (count <= n - 1) {
		for (int i = 0; i < k; i++) {
			c++;
			while (a[c] == 0) {
				c++;
				if (c > n - 1) {
					c = 0;
				}
			}
			if (c > n - 1) {
				c = 0;
			}
		}
		if (count < n-1) {
			printf("%d, ", a[c]);
		}
		else printf("%d", a[c]);
		a[c] = 0;
		count++;
	}
	printf(">");
	return 0;
}