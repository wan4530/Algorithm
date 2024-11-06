#include<stdio.h>
#include<math.h>

double getDistance(double x,double X,double y,double Y) {
	return sqrt((x - X) * (x - X) + (y - Y) * (y - Y));
}

int main() {
	int t;
	double x, y, r, X, Y, R;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lf %lf %lf %lf %lf %lf", &x, &y, &r, &X, &Y, &R);

		if (r < R) {
			double t = r;
			r = R;
			R = t;
		}

		float d = getDistance(x, X, y, Y);

		if (x == X && y == Y && r == R) {
			printf("-1\n");
		}
		else if (r + R < d) {
			printf("0\n");
		}
		else if ((r + R)* (r + R) == (x - X) * (x - X) + (y - Y) * (y - Y)) {
			printf("1\n");
		}
		else if (r - R < d && r + R > d) {
			printf("2\n");
		}
		else if ((r - R) * (r - R) == (x - X) * (x - X) + (y - Y) * (y - Y)) {
			printf("1\n");
		}
		else if (r - R > d) {
			printf("0\n");
		}
	}
}