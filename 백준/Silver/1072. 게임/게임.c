#include <stdio.h>
long long bins(long long key, long long l, long long h, long long total, long long win) {
	//printf("%lld %lld", l, h);
	if (h - l <= 1) {
		//printf("%lld",key);
		return h;
	}
	long long m = (l + h) / 2;
	long long p = (double)((win + m) * 100) / (total + m);
	if (key > p) {
		//printf("%lld\t %lld\n", p, m);
		return bins(key, m, h, total, win);
	}
	else {
		//printf("%lld\t %lld\n", p, m);
		return bins(key, l, m, total, win);
	}
}
int main(void) {
	long long x, y;
	scanf("%lld%lld", &x, &y);
	long long z = (double)(y * 100) / x;
	long long ans = bins(z + 1, 0, 1000000001, x, y);
	if (ans == 1000000001) printf("-1");
	else printf("%lld", ans);
	return 0;
}