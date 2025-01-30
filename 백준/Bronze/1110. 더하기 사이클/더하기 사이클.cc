#include <iostream>
int main() {
	int n;
	std::cin >> n;
	int new_n = n;
	int i = 0;
	while (1) {
		int l, r;
		if (new_n < 10) {
			l = 0;
			r = new_n;
		}
		else {
			l = new_n / 10;
			r = new_n % 10;
		}
		if (l + r < 10)
			new_n = (r * 10) + (l + r);
		else
			new_n = (r * 10) + ((l + r) % 10);
		i++;
		if (new_n == n) {
			break;
		}
	}
	std::cout << i << std::endl;
	return 0;
}