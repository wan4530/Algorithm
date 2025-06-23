#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	map<string, int> ma;
	map<string, int>::iterator it;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		ma[temp]++;
	}
	int m = 0;
	string tmp;
	for (it = ma.begin(); it != ma.end(); it++) {
		if (m < it->second) {
			m = it->second;
			tmp = it->first;
		}
	}
	cout << tmp;
	return 0;
}