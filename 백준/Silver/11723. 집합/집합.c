#include <stdio.h>
#include <string.h>
int main(void){
	int m;
	int x;
	int s[20] = {0};
	char jud[7] = { 0 };
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%s %d",jud, &x);
		if (strcmp(jud, "add") == 0) {
			s[x - 1] = 1;
		}
		else if (strcmp(jud, "remove") == 0) {
			s[x - 1] = 0;
		}
		else if (strcmp(jud, "check") == 0) {
			if (s[x - 1] > 0) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(jud, "toggle") == 0) {
			if (s[x - 1] > 0) s[x - 1] = 0;
			else s[x - 1] = 1;
		}
		else if (strcmp(jud, "all") == 0) {
			for (int i = 0; i < 20; i++) {
				s[i] = i + 1;
			}
		}
		else if (strcmp(jud, "empty") == 0) {
			for (int i = 0; i < 20; i++) {
				s[i] = 0;
			}
		}
	}
	return 0;
}