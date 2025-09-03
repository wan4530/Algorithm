#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int grid[101][101][101];
tuple<int, int, int> dir[6] = { {1,0,0},{0,1,0},{0,0,1},{-1,0,0},{0,-1,0},{0,0,-1} };

struct Node {
    int r, c, h, day;
};

int bfs(int n, int m, int h) {
    queue<Node> qu;
    for (int k = 1; k <= h; k++) {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (grid[i][j][k] == 1) {
                    qu.push({ i, j, k, 0 });
                }
            }
        }
    }
    int max_day = 0;
    while (!qu.empty()) {
        Node cur = qu.front(); qu.pop();
        max_day = max(max_day, cur.day);

        for (int d = 0; d < 6; d++) {
            tuple <int, int, int> next = { cur.r + get<0>(dir[d]), cur.c + get<1>(dir[d]), cur.h + get<2>(dir[d]) };
            if (get<0>(next) < 1 || get<0>(next) > m || get<1>(next) < 1 || get<1>(next) > n || get<2>(next) < 1 || get<2>(next) > h) continue;
            if (grid[get<0>(next)][get<1>(next)][get<2>(next)] == 0) {
                grid[get<0>(next)][get<1>(next)][get<2>(next)] = 1;
                qu.push({ get<0>(next), get<1>(next),get<2>(next), cur.day + 1 });
            }
        }
    }
    for (int k = 1; k <= h; k++) {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (grid[i][j][k] == 0) return -1;
            }
        }
    }

    return max_day;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m,h;
    cin >> n >> m >> h;
    for (int k = 1; k <= h; k++) {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> grid[i][j][k];
            }
        }
    }
    int ans = bfs(n, m, h);
    cout << ans << "\n";
    return 0;
}
