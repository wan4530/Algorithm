#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<int> graph[], int start, int end, int n) {
    int ans = 0;
    int j = 0;
    vector<int> visited(n + 1, 0);
    vector<int> distance(n + 1, 0);
    queue<int> qu;
    qu.push(start);
    while (!qu.empty()) {
        int now = qu.front();
        qu.pop();
        if (!visited[now]) {
            visited[now] = 1;
        }
        for (int i = 0; i < graph[now].size(); i++) {
            int next = graph[now][i];
            if (!visited[next]) {
                distance[next] = distance[now] + 1;
                qu.push(next);
                if(next == end) {
                    cout << distance[next];
                    j = 1;
                }
            }
        }
    }
    if(!j)
        cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, p1, p2;
    cin >> n >> p1 >> p2 >> m;
    vector<int> graph[104];
    while (m--) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 0; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());
    bfs(graph, p1, p2, n);
    return 0;
}
