#include <iostream>

using namespace std;
typedef long long ll;
ll arr[500001];
ll lane[500001];
ll car[500001];
ll ans[500001];
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n, m;
	cin >> n >> m;
	for (int i = 0; i < n - 1; i++)
		cin >> lane[i];
	for (int i = 0; i < m; i++) {
		ll v1, v2, c;
		cin >> v1 >> v2 >> c;
		arr[v1-1] += c;
		arr[v2-1] += -c;
	}
	ll sum = 0;
	for (int i = 0; i < n - 1;i++) {
		sum += arr[i];
		car[i] = sum;
	}
	for (int i = 0; i < n - 1; i++) {
		if (car[i] == 1) {
			ans[i] = 1;
		}
		else if (lane[i] >= car[i]) {
			ans[i] = car[i];
		}
		else {
			ll temp = car[i] / lane[i];
			ll rem = car[i] % lane[i];
			ans[i] += (temp * temp) * (lane[i] - rem);
			ans[i] += (temp + 1) * (temp + 1) * rem;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		cout << ans[i] << "\n";
	}
	return 0;
}