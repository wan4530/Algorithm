#include <stdio.h>

int main(void) {
	while (1) {
		int a, b, c, d, temp;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (a == 0 && b == 0 && c == 0 && d == 0) {
			break;
		}
		int j = 0;
		while (1) {
			if (a == b && b == c && c == d) {
				break;
			}
			temp = a;
			a -= b;
			b -= c;
			c -= d;
			d -= temp;
			j++;
			if (a < 0) {
				a *= -1;
			}
			if (b < 0) {
				b *= -1;
			}
			if (c < 0) {
				c *= -1;
			}
			if (d < 0) {
				d *= -1;
			}
		}
		printf("%d\n", j);
	}
}