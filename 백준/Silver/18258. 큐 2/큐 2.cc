#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	queue<int> que;
	for (int i = 0; i < n; i++) {
		string msg;
		cin >> msg;
		if (msg == "push") {
			int x;
			cin >> x;
			que.push(x);
		}
		else if(msg == "pop") {
			if (que.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
				que.pop();
			}
		}
		else if (msg == "size") {
			cout << que.size() << "\n";
		}
		else if (msg == "empty") {
			if(que.empty() == 1) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (msg == "front") {
			if (que.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
			}
		}
		else if (msg == "back") {
			if (que.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << que.back() << "\n";
			}
		}
	}
	return 0;
}