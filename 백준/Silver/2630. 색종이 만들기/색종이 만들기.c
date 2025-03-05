#include <stdio.h>
int cpaper[128][128];
int white, blue;
void div(int ls, int le, int ws, int we) {
	int jud = cpaper[ls][ws];
	for(int i = ls; i<le;i++){
		for (int j = ws; j < we; j++) {
			if (cpaper[i][j] != jud) {
				jud = -1;
				break;
			}
		}
		if (jud == -1) {
			break;
		}
	}
	if (jud == 0) white++;
	else if (jud == 1) blue++;
	else{
		int lm = (le - ls) / 2;
		int wm = (we - ws) / 2;
		if (lm > 0 && wm > 0) {
			div(ls, ls + lm, ws, ws + wm);
			div(ls, ls + lm, ws + wm, we);
			div(ls + lm, le, ws, ws + wm);
			div(ls + lm, le, ws + wm, we);
		}
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &cpaper[i][j]);
		}
	}
	div(0, n, 0, n);
	printf("%d\n%d",white,blue);
	return 0;
}