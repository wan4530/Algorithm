#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); 
	cout.tie(nullptr);
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	sort(t.begin(), t.end());
	int Max = 0;
	int s_idx = 0;
	int s_cnt = 0;
	for (int i = 0; i < n; i++) {
		while (s_cnt < i && s_idx < n) {
			if (t[s_idx] >= (s_cnt + 1) * a) 
				s_cnt++;
			s_idx++;
		}
		for (int j = 0; j < a; j++) {
			int cnt = 0;
			for (int k = s_idx; k < n; k++) {
				if (t[k] >= (s_cnt * a) + (b * j) + (cnt + 1) * (a - j))
					cnt++;
			}
			Max = max(Max, s_cnt + cnt);
		}
	}
	cout << Max;
	return 0;
}