#include <stdio.h>
int x[1000000] = { 0 };
int main(void){
	int n;
	int s = 0;
	scanf("%d", &n);
	for (int i = 0; i < n+n; i++) {
		x[i] = i + 1;
	}
	for (int i = 0; i < n-1; i++) {
		int temp;
		s++;
		temp = x[s];
		s++;
		x[n+i] = temp;
	}
	printf("%d", x[s]);
	return 0;
}