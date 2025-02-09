#include <stdio.h>

int main(void) {
	int x1, x2, y1, y2, z1, z2;
	int x, y;
	int temp = 0;
	scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
	if (x1 == 0) {
		y = z1 / y1;
		x = (z2 - (y2 * y)) / x2;
		printf("%d %d", x, y);
		return 0;
	}
	if (x2 == 0) {
		y = z2 / y2;
		x = (z1 - (y1 * y)) / x1;
		printf("%d %d", x, y);
		return 0;
	}
	temp = x1;
	x1 *= x2;
	y1 *= x2;
	z1 *= x2;
	x2 *= temp;
	y2 *= temp;
	z2 *= temp;
	x1 -= x2;
	y1 -= y2;
	z1 -= z2;

	y = z1 / y1;
	x = (z2 - (y2 * y)) / x2;

	printf("%d %d", x, y);
	return 0;
}