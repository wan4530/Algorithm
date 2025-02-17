#include <stdio.h>
int main(void) {
	long long arr[1000];
	arr[0] = 1;
	arr[1] = 2;
	for (int i = 2; i < 1000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 10007;
	}
	int n;
	scanf("%d", &n);
	printf("%lld", arr[n - 1]);
}