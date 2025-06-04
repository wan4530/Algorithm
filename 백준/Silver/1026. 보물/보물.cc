#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmph(const void* a, const void* b) {
	return  *(int*)a - *(int*)b;
}
int cmpl(const void* a, const void* b) {
	return  *(int*)b - *(int*)a;
}
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, ans = 0;
	cin >> n;
	int a[54] = { 0, };
	int b[54] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	qsort(a, n, sizeof(a[0]), cmph);
	qsort(b, n, sizeof(b[0]), cmpl);
	for (int i = 0; i < n; i++) {
		ans += (a[i] * b[i]);
	}
	cout << ans;
	return 0;
}