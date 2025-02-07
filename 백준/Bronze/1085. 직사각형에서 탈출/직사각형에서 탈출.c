#include <stdio.h>
int f_min(c_p,len) {
	if (len / 2 >= c_p) {
		return c_p;
	}
	else {
		return len - c_p;
	}
}

int main(void) {
	int x, y, w, h;
	int min_x = 0;
	int min_y = 0;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min_x = f_min(x, w);
	min_y = f_min(y, h);
	if (min_x > min_y) {
		printf("%d", min_y);
	}
	else {
		printf("%d", min_x);
	}

	return 0;
}