#include <iostream>

using namespace std;
int len[100004];
int p[100004];
int main() {
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		cin >> len[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	int hp = p[0];
	for (int i = 0; i < n-1; i++) {
		//cout << hp << " ";
		if (hp > p[i + 1]) {
			ans += hp * len[i];
			hp = p[i + 1];
		}
		else {
			ans += hp * len[i];
		}
		//cout << len[i]<<" " << ans << "\n";
	}
	cout << ans;
	return 0;
}