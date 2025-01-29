#include <stdio.h>

int parking_time[100];

int main(void) {
	int f_fee, s_fee, th_fee;
	int total = 0;
	scanf("%d %d %d", &f_fee, &s_fee, &th_fee);
	for (int i = 0; i < 3; i++) {
		int in, out;
		scanf("%d %d", &in, &out);
		for (int j = in-1; j < out-1; j++) {
			parking_time[j]++;
		}
	}
	for(int i = 0; i<100;i++) {
		if (parking_time[i] == 1) {
			total += f_fee;
		}
		else if (parking_time[i] == 2) {
			total += 2*s_fee;
		}
		else if (parking_time[i] == 3) {
			total += 3*th_fee;
		}
	}
	printf("%d", total);
}