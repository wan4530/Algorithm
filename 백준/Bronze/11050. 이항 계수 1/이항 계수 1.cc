#include <iostream>

using namespace std;

int main() {
	int n, k;

	cin >> n >> k;
	int nFac = 1;
	for (int i = 1; i <= n; i++) {
		nFac *= i;
	}
	int kFac = 1;
	for (int i = 1; i <= k; i++) {
		kFac *= i;
	}
	int nMkFac = 1;
	for (int i = 1; i <= n - k; i++) {
		nMkFac *= i;
	}
	cout << (float)nFac / (nMkFac * kFac) << endl;
	return 0;
}
