#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int BFS(vector<vector<int>>& v, vector<vector<int>>& ans, int a, int b, int n, int m) {
	queue<pair<int, int>> que;
	queue<int> num;
	num.push(0);
	que.push(make_pair(a, b));
	int x = 0, y = 0;
	int len = 0;
	while (!que.empty()) {
		x = que.front().first;
		y = que.front().second;
		len = num.front();
		que.pop();
		num.pop();
		if (x < 0 || y < 0 || x == n || y == m) continue;
		if (ans[x][y] != -1) continue;
		ans[x][y] = len;
		que.push(make_pair(x + 1, y));
		que.push(make_pair(x, y + 1));
		que.push(make_pair(x - 1, y));
		que.push(make_pair(x, y - 1));
		num.push(len + 1);
		num.push(len + 1);
		num.push(len + 1);
		num.push(len + 1);
	}

	return 0;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m, 0));
	vector<vector<int>> ans(n, vector<int>(m, -1));
	int a = -1, b = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			if (v[i][j] == 2) {
				a = i;
				b = j;
			}
			if (v[i][j] == 0) ans[i][j] = 0;
		}
	}

	BFS(v, ans, a, b, n, m);
	ans[a][b] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << ans[i][j] << " ";
		cout << "\n";
	}

	return 0;
}