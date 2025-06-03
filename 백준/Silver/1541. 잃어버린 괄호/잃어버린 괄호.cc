#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string a;
	cin >> a;
	int i = 0;
	int j = 0;
	int sum = 0;
	int mi = 0;
	int pi = 0;
	int num = 0;
	while (a[i]!='\0') {
		if (a[i] == '-') {
			if (j == 1) {
				sum -= num;
			}
			else {
				sum += num;
			}
			j = 1;
			num = 0;
		}
		else if (a[i] == '+') {
			if (j == 0) {
				sum += num;
			}
			else {
				sum -= num;
			}
			num = 0;
		}
		else {
			num = num * 10 + (a[i] - '0');
		}
		i++;
		//cout << sum << "\n";
	}
	if (j == 0) {
		sum += num;
	}
	else {
		sum -= num;
	}
	cout << sum << "\n";
	return 0;
}