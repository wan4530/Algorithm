#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	queue<int> qu;
	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}
	cout << "<";
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < k; j++) {
			qu.push(qu.front());
			qu.pop();
		}
		cout << qu.front()<<", ";
		qu.pop();
	}
	cout << qu.front() << ">";
	qu.pop();
	return 0;
}