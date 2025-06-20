#include <iostream>

using namespace std;
char p[500001];
char ans[500001];
int o_idx[500001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	string s;
	cin >> n >> s;
	int o_cnt = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		p[i] = s[i];
		if (p[i] == 'O') {
			ans[i] = '+';
			o_idx[o_cnt++] = i;
		}
	}
	if (o_cnt == 1) {
		if (n % 2 != 0) k = -1;
		else {
			int cnt = 1;
			int j = (o_idx[0] + 1) % n;
			while (j != o_idx[0]) {
				if (cnt++ < n / 2) ans[j] = '+';
				else ans[j] = '-';
				j = (j + 1) % n;

			}
		}
	}
	else if (o_cnt == 0) {
		for (int i = 0; i < n; i++) {
			ans[i] = '-';
		}
	}
	else {
		for (int i = 0; i < o_cnt; i++) {
			int curr = o_idx[i], next;
			if (i + 1 < o_cnt) next = o_idx[i + 1];
			else next = o_idx[0] + n;
			if (next - curr - 1 > 0 && (next - curr - 1) % 2 == 0) {
				k = -1;
				break;
			}
			for (int j = 1; j <= next - curr - 1; j++) {
				int pos = (curr + j) % n;
				if (j <= (next - curr - 1) / 2) ans[pos] = '+';
				else ans[pos] = '-';
			}
		}
	}
	if (n == 1 && p[0] == 'O') cout << "YES\n" << "+";
	else if (n == 1 && p[0] == 'X') cout << "YES\n" << "-";
	else {
		if (k == -1) cout << "NO";
		else {
			cout << "YES\n";
			for (int i = 0; i < n; i++) cout << ans[i];
		}
	}
	return 0;
}