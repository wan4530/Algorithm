#include <stdio.h>
int main(void){
	int n;
	char a[50] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int j = 0;
		int jud = 0;
		int count = 0;
		scanf("%s", &a);
		while (1) {
			if (a[j] == '\0') {
				break;
			}
			if (a[j] != '(') {
				count--;
			}
			else {
				count++;
			}
			if (count < 0) {
				break;
			}
			j++;
		}
		if (count != 0) jud = 1;
		if (jud == 0) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}