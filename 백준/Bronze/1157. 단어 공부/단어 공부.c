#include<stdio.h>
char w[1000001] = { '0', };
int main() {
	int jud = 0;
	int c[27] = { 0, };
	scanf("%s", &w);
	for (int i = 0; w[i] != '\0'; i++) {
		if (w[i] >= 65 && w[i] <= 90) {
			c[w[i] - 65]++;
		}
		else if (w[i] >= 97 && w[i] <= 122) {
			c[w[i] - 97]++;
		}
	}
	for (int i = 0; i < 27; i++) {
		if (c[jud] < c[i]) {
			jud = i;
		}
	}
	for (int i = 0; i < 27; i++) {
		if (c[jud] == c[i] && jud != i) {
			jud = -2;
		}
	}
	printf("%c", jud + 65);
	return 0;
}