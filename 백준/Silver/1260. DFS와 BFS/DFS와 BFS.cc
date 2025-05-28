#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

void dfs(vector<int> graph[], int v, int n) {
    vector<int> visited(n + 1, 0);
    stack<int> st;

    st.push(v);
    while (!st.empty()) {
        int now = st.top();
        st.pop();
        if (!visited[now]) {
            cout << now << " ";
            visited[now] = 1;
        }
        for (int i = graph[now].size() - 1; i >= 0; i--) {
            int next = graph[now][i];
            if (!visited[next])
                st.push(next);
        }
    }
    cout << "\n";
}
void bfs(vector<int> graph[], int v, int n) {
    vector<int> visited(n + 1, 0);
    queue<int> qu;
    qu.push(v);
    while (!qu.empty()) {
        int now = qu.front();
        qu.pop();
        if (!visited[now]) {
            cout << now << " ";
            visited[now] = 1;
        }
        for (int i = 0; i < graph[now].size(); i++) {
            int next = graph[now][i];
            if (!visited[next])
                qu.push(next);
        }
    }
    cout << "\n";
}
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, v;
    cin >> n >> m >> v;
    vector<int> graph[1001];
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for (int i = 0; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());
    dfs(graph, v, n);
    bfs(graph, v, n);
    return 0;
}