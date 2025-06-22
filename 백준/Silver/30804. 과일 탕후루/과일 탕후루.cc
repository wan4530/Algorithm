#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int temp[200001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> temp[i];
	int  max_len = 0;
	for (int i = 1; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			int len = 0;
			int s = 0, e = 0;
			while (e < n) {
				if (temp[e] == i || temp[e] == j) e++;
				else s = ++e;
				max_len = max(max_len, e - s);
			}
		}
	}
	cout << max_len;
	return 0;
}