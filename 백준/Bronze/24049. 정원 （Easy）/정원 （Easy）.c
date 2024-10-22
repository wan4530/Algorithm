#include <stdio.h>
int main(void){
	int n, m;
	int x[1000] = { 0 };
	int y[1000] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &y[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (x[i] == y[j]) {
				x[i] = 0;
				y[j] = 0;
			}
			else {
				x[i] = 1;
				y[j] = 1;
			}
		}
	}
	printf("%d", *(y + m - 1));
	return 0;
}