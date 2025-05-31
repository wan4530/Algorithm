#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

void bfs(int start,int n, vector<vector<int>>& graph, vector<int>& c) {
	int count = 1;
	vector<int>visited(n + 1, 0);
	queue<int>qu;
	c[start] = count++;
	visited[start] = 1;
	qu.push(start);
	while (!qu.empty()) {
		int now = qu.front();
		qu.pop();
		for (int i = 0; i < graph[now].size(); i++) {
			int next = graph[now][i];
			if (!visited[next]) {
				visited[next] = 1;
				c[next] = count++;
				qu.push(next);
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
	for (int i = 0; i < n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	bfs(r, n,graph,c);
	for (int i = 1; i <= n; i++) {
		cout << c[i] <<"\n";
	}
	return 0;
}