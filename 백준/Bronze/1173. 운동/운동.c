#include <stdio.h>

int main(void) {
	int ex_time, min, max, incr, decr;
	scanf("%d %d %d %d %d", &ex_time, &min, &max, &incr, &decr);
	int temp = 1;
	int total_time = 1;
	int crr = min + incr;
	if (crr > max) {
		printf("-1");
		return 0;
	}
	while (temp != ex_time) {
		if (crr + incr <= max) {
			crr += incr;
			temp++;
		}
		else if (crr + incr > max) {
			if (crr - decr < min) {
				crr = min;
			}
			else {
				crr -= decr;
			}
		}
		total_time++;
	}
	printf("%d", total_time);
	return 0;
}