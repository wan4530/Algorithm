#include <stdio.h>
long long t_len[101];
int main(void) {
	int t;
	scanf("%d", &t);
	t_len[0] = 1;
	t_len[1] = 1;
	t_len[2] = 1;

	for (int i = 3; i < 100; i++) {
		t_len[i] = t_len[i - 3] + t_len[i - 2];
	}
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", t_len[n - 1]);
	}
	return 0;
}