#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>


using namespace std;

void dfs(int start, int n, vector<vector<int>>& graph, vector<int>& c) {
	int count = 1;
	vector<int>visited(n + 1, 0);
	stack<int> st;
	
	st.push(start);
	while (!st.empty()) {
		int now = st.top();
		st.pop();

		if (!visited[now]) {
			visited[now] = 1;
			c[now] = count++;
		}
		for (int i = graph[now].size()-1; i >= 0; i--) {
			int next = graph[now][i];
			if (!visited[next]) {
				st.push(next);
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, r;
	cin >> n >> m >> r;
	vector<vector<int>> graph(n + 1);
	vector<int> c(n + 1);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(r, n, graph, c);
	for (int i = 1; i <= n; i++) {
		cout << c[i] << "\n";
	}
	return 0;
}