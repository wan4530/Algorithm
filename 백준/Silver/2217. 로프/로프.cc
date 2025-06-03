#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> r;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		r.push_back(temp);
	}
	sort(r.begin(), r.end(), greater<>());
	
	int weight = r[0];
	for (int i = 1; i < n; i++) {
		if (weight < r[i] * (i + 1))
			weight = r[i] * (i + 1);
	}
	cout << weight;
	return 0;
}