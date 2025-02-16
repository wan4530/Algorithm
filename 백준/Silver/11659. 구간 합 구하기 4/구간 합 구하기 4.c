#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n, m, s, e;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* sum_arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sum_arr[0] = arr[0];
	for (int i = 1; i < n; i++) {
		sum_arr[i] = sum_arr[i - 1] + arr[i];
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &s, &e);
		if (s == 1) printf("%d\n", sum_arr[e - 1]);
		else printf("%d\n", sum_arr[e-1] - sum_arr[s-2]);
	}
	return 0;
}