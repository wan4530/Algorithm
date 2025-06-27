#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int map[101][101];
int main() {
	int n, m;
	cin >> n >> m;
	fill(&map[0][0], &map[0][0] + 101 * 101, 101);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	for (int mid = 1; mid < n + 1; mid++) {
		for (int str = 1; str < n + 1; str++) {
			for (int end = 1; end < n + 1; end++) {
				if (str == end) continue;
				map[str][end] = min(map[str][end], map[str][mid] + map[mid][end]);
			}
		}
	}
	vector<pair<int, int>> v;
	for (int i = 1; i < n + 1; i++) {
		int Sum = 0;
		for (int j = 1; j < n + 1; j++) {
			if (i == j) continue;
			Sum += map[i][j];
		}
		v.push_back({ Sum,i });
	}
	sort(v.begin(), v.end());
	cout << v[0].second;
	return 0;
}