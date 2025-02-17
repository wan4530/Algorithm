#include <stdio.h>
int graph[101][101];
int dfs[101];
void f_dfs(int v, int n, int* sum) {
	dfs[v] = 1;
	if (v != 1) {
		*(sum) += 1;
	}
	for (int i = 1; i <= n; i++) {
		if (graph[v][i] == 1 && dfs[i] == 0) {
			f_dfs(i, n, sum);
		}
	}
	return ;

}
int main() {
	int n,m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	int ans = 0;
	int* pans = &ans;
	f_dfs(1, n, pans);
	printf("%d", ans);
}