#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long s;
	cin >> s;
	long long n = 0;
	long long ns = 0;
	long long c = 0;
	while (ns <= s) {
		n++;
		ns += n;
	}
	cout << n-1;
	return 0;
}