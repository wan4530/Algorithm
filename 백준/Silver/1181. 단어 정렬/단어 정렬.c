#include <stdio.h>
#include <stdlib.h>
char w[200001][51];
int cmp(const void* a, const void* b) {
	int jud = 0;
	if (strlen((char*)a) == strlen((char*)b)) {
		return strcmp((char*)a, (char*)b);
	}
	else return strlen((char*)a)-strlen((char*)b);
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &w[i]);
	}
	qsort(w, n, sizeof(w[0]), cmp);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcmp(w[i], w[j]) == 0) i++;
		}
		printf("%s\n", w[i]);
	}
	return 0;
}