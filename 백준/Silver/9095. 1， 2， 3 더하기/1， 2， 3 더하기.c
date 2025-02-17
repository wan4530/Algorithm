#include <stdio.h>
int main(void) {
	int arr[11];
	int t;
	scanf("%d", &t);
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;
	for (int i = 3; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		printf("%d\n", arr[n - 1]);
	}
}