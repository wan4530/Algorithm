#include <stdio.h>
#include <stdlib.h>

char nvr_heard[500001][21];
char nvr_seen[500001][21];
int both[500000];

int cmp(const char* a, const char* b) {
	return strcmp(a,b);
}

int bin_srch(char* key, int low, int high) {
	int middle = (low + high) / 2;
	if (low <= high) {
		if (strcmp(key, nvr_seen[middle]) == 0) {
			return middle;
		}
		else if (strcmp(key, nvr_seen[middle]) < 0) {
			return bin_srch(key,low,middle-1);
		}
		else {
			return bin_srch(key, middle + 1, high);
		}
	}
	else {
		return -1;
	}
}
int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", nvr_heard[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%s", nvr_seen[i]);
	}
	qsort(nvr_heard, n, sizeof(nvr_heard[0]), cmp);
	qsort(nvr_seen, m, sizeof(nvr_seen[0]), cmp);

	int j = 0;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		temp = bin_srch(nvr_heard[i], 0, m);
		if (temp >= 0) {
			both[j] = temp;
			j++;
		}
	}
	printf("%d\n", j);
	for (int i = 0; i < j; i++) {
		printf("%s\n", nvr_seen[both[i]]);
	}
	return 0;
}