#include <stdio.h>
int my[5][5];
int mc[5][5];
int z[25];
int check(int f[5][5], int key) {
	int index;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (f[i][j] == key) {
				f[i][j] = 0;
				index = i * 10 + j;
			}
		}
	}
	return index;
}
int bing(int f[25]) {
	int binggo = 0;
	int w[5] = { 0 };
	int h[5] = { 0 };
	int d1 = 0;
	int d2 = 0;
	for (int i = 0; i < 25; i++) {
		binggo = 0;
		if (f[i] % 10 == f[i] / 10) {
			d1++;
		}
		if ((f[i] % 10) + f[i] / 10 == 4) {
			d2++;
		}
		if (d1 == 5) {
			binggo++;
		}
		if (d2 == 5) {
			binggo++;
		}
		for (int j = 0; j < 5; j++) {
			if (f[i] / 10 == j) {
				h[j]++;
			}
			if (f[i] % 10 == j) {
				w[j]++;
			}
			if (h[j] == 5) {
				binggo++;
			}
			if (w[j] == 5) {
				binggo++;
			}
			if (binggo == 3) {
				return i;
			}
		}
	}
	return binggo;
}
int main(void) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &my[i][j]);
		}
	}
	int k = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &mc[i][j]);
			z[k] = check(my, mc[i][j]);
			k++;
		}
	}
	printf("%d", bing(z)+1);
	return 0;
}