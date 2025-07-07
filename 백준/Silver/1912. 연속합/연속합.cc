#include <iostream>
using namespace std;
int arr[100001];
int sum[100001];
int main() {
	int n,max_sum;
	cin >> n;
	for (int i = 1; i <= n; i++) 
		cin >> arr[i];
	sum[1] = arr[1];
	max_sum = arr[1];
	bool nega_jud = false;
	if (sum[1] < 0)
		nega_jud = true;
	for (int i = 2; i <= n; i++) {
		if (nega_jud == true) {
			sum[i] = arr[i];
			max_sum = max(max_sum, sum[i]);
			if (sum[i] >= 0)
				nega_jud = false;
		}
		else {
			sum[i] = sum[i - 1] + arr[i];
			if (sum[i] < 0)
				nega_jud = true;
			else
				max_sum = max(max_sum, sum[i]);
		}
	}
	cout << max_sum;
	return 0;
}