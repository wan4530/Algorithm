#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> visited(100001, 0);
	queue<pair<int, int>> q;
	q.push({ 0,n });
	while (q.size()) {
		auto [cnt, now] = q.front();
		q.pop();
		if (now == k) {
			cout << cnt;
			break;
		}
		visited[now] = 1;
		if (now != 0 && visited[now - 1] == 0) {
			q.push({ cnt + 1,now - 1 });
			visited[now - 1] = 1;
		}
		if (now != 100000 && visited[now + 1] == 0) {
			q.push({ cnt + 1, now + 1 });
			visited[now + 1] = 1;
		}
		if (now * 2 <= 100000 && visited[now * 2] == 0) {
			q.push({ cnt + 1, now * 2 });
			visited[now * 2] = 1;
		}
	}
	return 0;
}