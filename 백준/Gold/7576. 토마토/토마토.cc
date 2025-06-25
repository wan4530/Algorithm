#include <iostream>
#include <queue>
using namespace std;

int grid[1002][1002];
pair<int, int> dir[4] = { {1,0},{0,1},{-1,0},{0,-1} };

struct Node {
    int r, c, day;
};

int bfs(int n, int m) {
    queue<Node> qu;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (grid[i][j] == 1) {
                qu.push({ i, j, 0 });
            }
        }
    }

    int max_day = 0;
    while (!qu.empty()) {
        Node cur = qu.front(); qu.pop();
        max_day = max(max_day, cur.day);

        for (int d = 0; d < 4; d++) {
            pair<int, int> next = { cur.r + dir[d].first, cur.c + dir[d].second };

            if (next.first < 1 || next.first > m || next.second < 1 || next.second > n) continue;
            if (grid[next.first][next.second] == 0) {
                grid[next.first][next.second] = 1;
                qu.push({ next.first, next.second, cur.day + 1 });
            }
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (grid[i][j] == 0) return -1;
        }
    }

    return max_day;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = bfs(n, m);
    cout << ans << "\n";
    return 0;
}
