#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<pair<int, int>> a;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		a.push_back({ s, e });
	}
	sort(a.begin(), a.end());

	pq.push(a[0].second);
	for (int i = 1; i < n; i++) {
		if (a[i].first >= pq.top()) {
			pq.pop();
			pq.push(a[i].second);
		}
		else {
			pq.push(a[i].second);
		}
	}
	cout << pq.size();
	return 0;
}