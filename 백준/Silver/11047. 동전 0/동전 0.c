#include <stdio.h>
int coin[10];
int main(void) {
	int n, k;
	int time = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}
	while(1){
		for (int i = n-1; i >= 0; i--) {
			if (k - coin[i]>=0) {
				k -= coin[i];
				break;
			}
		}
		time++;
		if (k == 0) {
			break;
		}
	}
	printf("%d", time);
	return 0;
}