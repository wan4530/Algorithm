#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char c[21];
	char tc[21];
}haebin;
int cmp(const void* a,const void* b) {
	return strcmp(((haebin*)a)->tc, ((haebin*)b)->tc);
}
int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		haebin bin[31] = { 0 };
		int n;
		int da[31] = { 0 };
		int d = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%s%s", &bin[j].c, bin[j].tc);
		}
		qsort(bin, n, sizeof(haebin), cmp);
		da[d] = 1;
		for (int j = 1; j < n; j++) {
			if (strcmp(bin[j-1].tc, bin[j].tc) != 0) {
				d++;
				da[d] = 1;
			}
			else {
				da[d]++;
			}
		}
		int ans = 1;
		if (d == 0) {
			printf("%d\n", n);
		}
		else {
			for (int j = 0; j < d+1; j++) {
				ans *= (da[j] + 1);
			}
			printf("%d\n", ans-1);
		}

	}
	return 0;
}