#include <stdio.h>
int main(void) {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int lock_room[100] = { 0 };
		int run_p = 0;
		int n_room;
		scanf("%d", &n_room);
		for (int j = 2; j <= n_room; j++) {
			int k = 1;
			while (j * k <= n_room) {
				if (lock_room[j * k - 1] == 0) {
					lock_room[j * k - 1] = -1;
				}
				else if (lock_room[j * k - 1] == -1) {
					lock_room[j * k - 1] = 0;
				}
				k++;
			}
		}
		for (int j = 0; j < n_room;j++) {
			if (lock_room[j] == 0) {
				run_p++;
			}
		}
		printf("%d\n", run_p);
	}
}