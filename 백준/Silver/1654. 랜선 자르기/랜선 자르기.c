#include <stdio.h>
#include <stdlib.h>
long long lan[10000];
int binsrch(long long key,long long low, long long high, int l) {
	if (high - low <= 1) {
		return low;
	}
	long long sum = 0;
	long long middle = (low + high) / 2 ;
	for (int i = 0; i < l; i++) {
		sum += lan[i]/middle;
	}
	//printf("%lld\n", middle);
	if (sum < key) {
		return binsrch(key, low, middle, l);
	}
	else {
		return binsrch(key, middle, high, l);
	}
}
int cmp(const long long* a, const long long* b) {
	return *a - *b;
}
int main(void) {
	int k, n;
	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++) {
		scanf("%lld", &lan[i]);
	}
	if (k == 1) {
		printf("%lld", lan[0] / n);
		return 0;
	}
	qsort(lan, k, sizeof(long long), cmp);
	
	printf("%lld", binsrch(n, 0, lan[k - 1]+1, k));
	return 0;
}