#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	scanf("%d", &n);
	int* dp = (int*)malloc(sizeof(int) * n + 1);
	*dp = 1;
	*(dp + 1) = 3;
	for (int i = 2; i < n + 1; i++) {
		*(dp + i) = (*(dp + i - 1) * 2 + *(dp + i - 2)) % 9901;
	}
	printf("%d", *(dp + n));
	return 0;
}