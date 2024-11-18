#include <stdio.h>
int main(void) {
	int n;
	int count = 0;
	scanf("%d", &n);
	while (n%5 != 0 && n>5) {
		n -= 3;
		count++;
	}
	if (n < 5) {
		if (n == 3) {
			count += 1;
			printf("%d", count);
		}
		else {
			count = -1;
			printf("%d", count);
		}
	}
	else {
		count += n / 5;
		printf("%d", count);
	}
	return 0;
}