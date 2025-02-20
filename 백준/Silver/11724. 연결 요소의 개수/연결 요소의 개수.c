#include <stdio.h>
int graph[1001][1001];
int dfs[1001];
int f_dfs(int v, int n) {
	dfs[v] = 1;
	int re = -1;
	for (int i = 1; i <= n; i++) {
		if (dfs[i] == 0) {
			re = i;
		}
		if (graph[v][i] == 1 && dfs[i] == 0) {
			re = f_dfs(i, n);
		}
	}
	//printf("%d\n", re);
	return re;
}
int main(void) {
	int n,m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	int i = 1;
	int ans = 0;
	while (i != -1) {
		i = f_dfs(i, n);
		//printf("%d\n", i);
		ans++;
	}
	printf("%d", ans);
	return 0;
}