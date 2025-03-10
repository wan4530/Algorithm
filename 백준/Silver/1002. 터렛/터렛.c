#include <stdio.h>
#include <math.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		double x1, y1, r1, x2, y2, r2;
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		double large;
		double small;
		if (r1 > r2) {
			large = r1;
			small = r2;
		}
		else {
			large = r2;
			small = r1;
		}
		double distance_two_point = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		if (distance_two_point == 0) {
			if (r1 == r2) {
				printf("-1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (distance_two_point > r1 + r2 || large - small > distance_two_point) {
			printf("0\n");
		}
		else if (r1 + r2 == distance_two_point || large - small == distance_two_point) {
			printf("1\n");
		}
		else if(large - small < distance_two_point && distance_two_point < r1 + r2){
			printf("2\n");
		}
	}
	return 0;
}