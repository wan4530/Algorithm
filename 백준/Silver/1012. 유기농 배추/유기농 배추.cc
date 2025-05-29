#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<vector<int>> v(52, vector<int>(52, 0));
pair<int, int> dir[4] = { {1,0},{0,1},{-1,0},{0,-1} };

void dfs(int y, int x) {
    v[y][x] = 0;
    stack<pair<int, int>> s;
    s.push({ y,x });
    while (!s.empty()) {
        pair<int, int> now = s.top(); s.pop();
        for (int i = 0; i < 4; i++) {
            pair<int, int> next = { now.first + dir[i].first,now.second + dir[i].second };
            if (v[next.first][next.second]) {
                v[next.first][next.second] = 0;
                s.push(next);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int m, n, k;
        cin >> m >> n >> k;
        while (k--) {
            int x, y;
            cin >> x >> y;
            v[y + 1][x + 1] = 1; 
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (v[i][j]) {
                    dfs(i, j);
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}