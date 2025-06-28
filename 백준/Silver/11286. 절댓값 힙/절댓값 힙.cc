#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	priority_queue<int> mq;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (!pq.empty() && !mq.empty()) {
				if (pq.top() < (mq.top() * -1)) {
					cout << pq.top()<<"\n";
					pq.pop();
				}
				else {
					cout << mq.top() << "\n";
					mq.pop();
				}
			}
			else if (!mq.empty()) {
				cout << mq.top() << "\n";
				mq.pop();
			}
			else if (!pq.empty()) {
				cout << pq.top() << "\n";
				pq.pop();
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (temp > 0) {
			pq.push(temp);
		}
		else if (temp < 0) {
			mq.push(temp);
		}
	}
	return 0;
}