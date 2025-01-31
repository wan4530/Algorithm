#include <stdio.h>
int cake[1000];
int main(void) {
	int l,n;
	int ex_max = 0;
	int temp = 0;
	int temp1 = 0;
	int re_max2 = 0;
	scanf("%d %d", &l, &n);
	for (int i = 0; i < n; i++) {
		int temp2 = 0;
		int st, end;
		scanf("%d %d", &st, &end);
		if (end - st > temp1) {
			ex_max = i+1;
			temp1 = end - st;
		}
		for (int j = st - 1; j < end; j++) {
			if (cake[j] == 0) {
				cake[j] = i + 1;
				temp2++;
			}
		}
		if (temp2 > temp) {
			re_max2 = i + 1;
			temp = temp2;
		}
	}
	printf("%d\n%d", ex_max, re_max2);
}