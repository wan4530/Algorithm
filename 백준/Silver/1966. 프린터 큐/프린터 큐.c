#include <stdio.h>
typedef struct {
	int number;
	int important;
}PR;
int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n, m;
		PR pr[901] = { 0 };
		PR bfr[101] = { 0 };
		scanf("%d %d", &n, &m);

		int front = 0;
		int rear = n - 1;
		int real = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &pr[j].important);
			pr[j].number = j;
		}
		for(int j = front; j<= rear;j++){
			int jud = 0;
			for (int k = j; k <= rear; k++) {
				if (pr[j].important < pr[k].important) {
					rear++;
					front++;
					pr[rear].important = pr[j].important;
					pr[rear].number = pr[j].number;
					jud++;
					break;
				}
			}
			for (int k = j; k <= rear; k++) {
				if (pr[j].important < pr[k].important) {
					jud++;
					break;
				}
			}
			if (jud == 0) {
				bfr[real].important = pr[j].important;
				bfr[real].number = pr[j].number;
				real++;
			}
		}
		for (int j = 0; j < real; j++) {
			if (m == bfr[j].number) {
				printf("%d\n", j + 1);
			}
			
		}
	}
	return 0;
}