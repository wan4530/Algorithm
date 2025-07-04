#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string op, v;
		int n;
		bool rev = false, err = false;
		cin >> op >> n >> v;
		int s = 0, e = n - 1;
		vector<int> arr;
		int start = 1;
		for (int j = 2; j < v.length(); j++) {
			if (v[j] == ',' || v[j] == ']') {
				int num = stoi(v.substr(start, j - start));
				arr.push_back(num);
				start = j + 1;
			}
		}
		for (int j = 0; j < op.size(); j++) {
			if (op[j] == 'R') rev = !rev;
			else {
				if (e >= s) {
					if (!rev) s++;
					else e--;
				}
				else {
					err = true;
					break;
				}
			}
		}
		if (!err) {
			if (s > e) cout << "[]\n";
			else {
				cout << "[";
				if (!rev) {
					for (int j = s; j < e; j++)
						cout << arr[j] << ",";
					cout << arr[e] << "]\n";
				}
				else {
					for (int j = e; j > s; j--)
						cout << arr[j] << ",";
					cout << arr[s] << "]\n";
				}
			}
		}
		else cout << "error\n";
	}
	return 0;
}