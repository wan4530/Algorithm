#include <stdio.h>
#include <stdlib.h>
int a[100000];
int b[100000];
int src(int a[], int len, int key) {
	int low = 0, high = len - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (key == a[mid]) {
			return 1;
		}
		else if (key < a[mid]) {
			high = mid - 1;
		}
		else if (key > a[mid]) {
			low = mid + 1;
		}
	}
	return 0;
}
int cmp(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 < num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}
int main(void) {
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < m; i++) {
		printf("%d\n",src(a, n, b[i]));
	}
	return 0;
}