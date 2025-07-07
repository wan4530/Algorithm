#include <iostream>
using namespace std;
int dp[110][110][110];
int ch[110][110][110];
int w(int a, int b, int c) {
	if (ch[a][b][c])
		return dp[a][b][c];
	ch[a][b][c] = 1;
	if (a <= 50 || b <= 50 || c <= 50) 
		return (dp[a][b][c] = 1);
	else if (a > 70 || b > 70 || c > 70) 
		return (dp[a][b][c] = w(70, 70, 70));
	else if (a < b && b < c)
		return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else
		return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}
int main() {
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		int ans = w(a+50, b+50, c+50);
		cout << "w(" << a << ", " << b << ", " << c << ") = " << ans<<"\n";
	}
	return 0;
}