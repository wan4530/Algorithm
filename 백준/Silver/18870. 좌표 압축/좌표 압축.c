#include <stdio.h>
#include <stdlib.h>
int array[1000000][3];

int cmp(const int* a, const int* b) {
	return *a - *b;
}
int cmp_s(const int* a, const int* b) {
	return *(a + 1) - *(b + 1);
}
int main(void) {
	int n, m;
	scanf("%d", &n);
	int max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i][0]);
		if (i == n - 2) {
			max = array[i][0];
		}
		array[i][1] = i;
	}
	qsort(array, n, sizeof(array[0]), cmp);
	for (int i = 0; i < n; i++) {
		//printf("%d ", array[i][0]);
	}
	//printf("\n");
	int k = 0;
	int temp = array[0][0];
	for (int i = 0; i < n; i++) {
		if (array[i][0] != temp) {
			k++;
			temp = array[i][0];
		}
		array[i][0] = k;
		//printf("%d\n", array[i][0]);
	}
	qsort(array, n, sizeof(array[0]), cmp_s);
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i][0]);
	}
	return 0;
}