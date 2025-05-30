#include <iostream>
#include<string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int map[27][27];
int k = 0;
vector<int> aCount;
pair<int, int> dir[4] = { {1,0},{0,1},{-1,0},{0,-1} };

void dfs(int x,int y) {
	map[x][y] = 0;
	stack<pair<int, int>> st;
	st.push({ x,y });
	while (!st.empty()) {
		pair<int, int> now = st.top();
		st.pop();
		for (int i = 0; i < 4; i++) {
			pair<int, int> next = { now.first + dir[i].first,now.second + dir[i].second };
			if (map[next.first][next.second]) {
				map[next.first][next.second] = 0;
				st.push(next);
				aCount[k]++;
			}
		}
	}
}

int main() {
	int n;
	string a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a.size() < n) {
			for (int j = 1; j <= n - a.size(); j++) {
				map[i][j] = 0;
			}
		}
		int h = 0;
		for (int j = n - a.size()+1; j <= n; j++) {
			map[i][j] = a[h++] - 48;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j]) {
				aCount.push_back(1);
				dfs(i, j);
				k++;
			}
		}
	}
	cout << k << "\n";
	sort(aCount.begin(), aCount.end());
	for (int i = 0; i < k; i++) {
		cout << aCount[i] << "\n";
	}
	return 0;
}