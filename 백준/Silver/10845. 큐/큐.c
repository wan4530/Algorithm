#include <stdio.h>
#include <stdlib.h>
int q[10000];
int main(void) {
    int n;
	char w[6];
	int max = -1;
	int ap = 0;
	int back = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &w);
		if (strcmp(w, "push") == 0) {
			scanf("%d", &q[back]);
			back++;
            max++;
		}
		else if (strcmp(w, "pop") == 0) {
			if (max < 0) printf("-1\n");
			else {
				printf("%d\n", q[ap]); 
				max--;
				ap++;
			}
		}
		else if (strcmp(w, "size") == 0) {
			printf("%d\n", max+1);
		}
		else if (strcmp(w, "empty") == 0) {
			if (max < 0) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(w, "front") == 0) {
			if (max < 0)printf("-1\n");
			else printf("%d\n", q[ap]);
		}
		else {
			if (max < 0) printf("-1\n");
			else printf("%d\n", q[back-1]);
		}
	}
	return 0;
}