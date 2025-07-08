#include <iostream>
using namespace std;
int a[500001];
int tmp[500001];
int ans = -1;
int cnt = 0;
int k;
void merge(int s, int m, int e) {
	int i = s, j = m + 1, h = 0;
	while (i <= m && j <= e) {
		if (a[i] <= a[j]) tmp[h++] = a[i++];
		else             tmp[h++] = a[j++];
	}
	while (i <= m) tmp[h++] = a[i++];
	while (j <= e) tmp[h++] = a[j++];
	for (int t = 0; t < h; t++) {
		a[s + t] = tmp[t];
		cnt++;
		if (cnt == k) {
			ans = tmp[t];
			break;
		}
	}
}

void merge_sort(int s,int e) {
	if (s < e) {
		int m = (s + e) / 2;
		merge_sort(s, m);
		merge_sort(m + 1, e);
		merge(s, m, e);
	}
}
int main() {
	int n;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	merge_sort(0, n - 1);
	cout << ans;
	return 0;
}