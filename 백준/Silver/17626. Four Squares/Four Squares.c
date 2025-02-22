#include <stdio.h>
#include <math.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int ans = 0;
	int h = 0;
	int num1, num2, num3, num4;
	for (int i = 0; i < 223; i++) {
		for (int j = 0; j < 223; j++) {
			for (int k = 0; k < 223; k++) {
				h = sqrt(n - (i * i + j * j + k * k));
				if (h >= 0 && h <= 223 && h * h + i * i + j * j + k * k == n) {
					if (i != 0) {
						ans++;
					}
					if (j != 0) {
						ans++;
					}
					if (k != 0) {
						ans++;
					}
					if (h != 0) {
						ans++;
					}
					printf("%d\n", ans);
					return 0;
				}
				
			}
		}
	}
	//printf("%d", ans);
	return 0;
}