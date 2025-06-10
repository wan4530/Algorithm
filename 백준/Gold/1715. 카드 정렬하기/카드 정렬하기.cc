#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
	priority_queue<int,vector<int>,greater<int>> pq;
	vector<int> a(100004,0);
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		pq.push(temp);
	}
	int i = 0;
	while (pq.size()>1) {
		int x = pq.top(); pq.pop();
		int y = pq.top(); pq.pop();
		a[i++] = (x + y);
		pq.push(x + y);
	}
	while (i>=0) {
		ans += a[i--];
	}
	cout << ans;
	return 0;
}