#include <iostream>
#include <algorithm>
using namespace std;
int t, n, mx = 0, arr[2][100004];

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		mx = 0;
		cin >> n;
		for (int a = 0; a < 2; a++) {
			for (int b = 2; b < n+2; b++) {
				cin >> arr[a][b];
			}
		}
		for (int b = 2; b < n+2; b++) {
			for (int a = 0; a < 2; a++) {
				arr[a][b] += max(arr[(a * -1) + 1][b - 1], arr[(a * -1)+1][b - 2]);
				if (mx < arr[a][b]) {
					mx = arr[a][b];
				}
			}
		}
		cout << mx << "\n";
	}
	return 0;
}