#include <iostream>
int fibo[21];
int main() {
	int n;
	fibo[1] = 1;
	std::cin >> n;
	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	std::cout << fibo[n] << std::endl;
	return 0;
}