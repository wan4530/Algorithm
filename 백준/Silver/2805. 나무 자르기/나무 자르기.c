#include <stdio.h>
#include <stdlib.h>
int cmp(const long long* a, const long long* b) {
	return(*b - *a);
}
long long binsrch(long long low, long long high, int key, long long* arr, int size) {
	long long middle = (low + high) / 2;
	if (low >= high) {
		return low;
	}
	//printf("%lld", middle);
	long long sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < middle) {
			break;
		}
		sum += (arr[i] - middle);
	}
	//printf(" %lld\n", sum);
	if (sum > key) {
		return binsrch(middle + 1, high, key, arr, size);
	}
	else if (sum < key) {
		return binsrch(low, middle - 1, key, arr, size);
	}
	else {
		//printf("%lld", middle);
		return middle;
	}

}
int main(void) {
	int n;
	long long m;
	scanf("%d%lld", &n, &m);
	long long* arr = (long long*)malloc(sizeof(long long) * n);
	if (arr == NULL) {
		return 0;
	}
	for (int i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	qsort(arr, n, sizeof(long long), cmp);
	long long ans = binsrch(0, arr[0], m, arr, n);
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < ans) {
			break;
		}
		sum += arr[i] - ans;
	}
	if (sum < m) {
		printf("%lld", --ans);
	}
	else {
		printf("%lld", ans);
	}
	free(arr);
	return 0;
}