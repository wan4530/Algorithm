#include<iostream>

using namespace std;
bool dp[1001];
int main() {
	int n;
	cin >> n;
	dp[1] = false;
	dp[2] = true;
	dp[3] = false;
	for (int i = 4; i <= n; i++) {
		if (dp[i - 3] || dp[i - 1])
			dp[i] = false;
		else 
			dp[i] = true;
	}
	if (dp[n])
		cout << "SK";
	else
		cout << "CY";
	return 0;
}