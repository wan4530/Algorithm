#include <stdio.h>
int arr[1000001];
int solve(int a) {
	if (arr[a]) return arr[a];
	int small = 0;
	int x, y, z;
	if (!(a % 3)) {
		x = solve(a / 3) + 1;
		if (arr[a] == 0 || arr[a] > x) {
			arr[a] = x;
		}
	}
	//printf("%d", arr[a]);
	if (!(a % 2)) {
		y = solve(a / 2) + 1;
		if (arr[a] == 0 || arr[a] > y) {
			arr[a] = y;
		}
	}
	z = solve(a - 1) + 1;
	if (arr[a] == 0 || arr[a] > z) {
		arr[a] = z;
	}
	return arr[a];
}
int main(void) {
	int n;
	int t = 0;
    arr[0] = -1;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	scanf("%d", &n);
	printf("%d", solve(n));
}