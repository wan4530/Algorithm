#include <stdio.h>
#include <string.h>
int s[100000] = { 0 };
int main(void){
	int m;
	int x;
	int j = 0;
	char jud[6] = { 0 };
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%s",jud);
		if (strcmp(jud, "push") == 0) {
			scanf(" %d", &x);
			s[j] = x;
			j++;
		}
		else if (strcmp(jud, "pop") == 0) {
			if (j == 0) printf("-1\n");
			else {
				printf("%d\n", s[j - 1]);
				s[j - 1] = 0;
				j--;
			}
		}
		else if (strcmp(jud, "size") == 0) {
			printf("%d\n", j);
		}
		else if (strcmp(jud, "empty") == 0) {
			if (j > 0) printf("0\n");
			else printf("1\n");
		}
		else if (strcmp(jud, "top") == 0) {
			if (j == 0) printf("-1\n");
			else printf("%d\n", s[j-1]);
		}
	}
	return 0;
}