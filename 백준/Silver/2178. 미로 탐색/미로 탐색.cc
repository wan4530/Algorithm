#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
int graph[104][104];
int visited[104][104];
int dis[104][104];
pair<int, int> dir[4] = { {1,0},{0,1},{-1,0},{0,-1} };
void bfs(int x, int y,int n,int m) {
    graph[x][y] = 0;
    queue<pair<int, int>> qu;
    qu.push({ x,y });
    while (!qu.empty()) {
        pair<int, int> now = qu.front();
        qu.pop();
        for (int i = 0; i < 4; i++) {
            pair<int, int> next = { now.first + dir[i].first,now.second + dir[i].second };
            if (graph[next.first][next.second]) {
                dis[next.first][next.second] = dis[now.first][now.second]+1;
                graph[next.first][next.second] = 0;
                qu.push(next);
            }
        }
    }
    cout << dis[n][m]+1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if (s.size() < m) {
            for (int j = 1; j <= s.size(); j++) {
                graph[i][j] = 0;
            }
        }
        int h = 0;
        for (int j = m - s.size() + 1; j <= m; j++) {
            graph[i][j] = s[h++]-'0';
        }
    }

    bfs(1, 1, n, m);
    return 0;
}
