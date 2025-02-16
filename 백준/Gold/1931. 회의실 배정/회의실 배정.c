#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int start;
	int end;
}time;
int cmp(const time* a, const time* b) {
	if (a->end == b->end) {
		return (a->start - b->start);
	}
	return (a->end - b->end);
}
int main(void) {
	int n;
	int ans = 1;
	scanf("%d", &n);
	time* arr = (time*)malloc(sizeof(time) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &(arr + i)->start, &(arr + i)->end);
	}
	qsort(arr, n, sizeof(time), cmp);
	int e_time= arr->end;
	for (int i = 1; i < n; i++) {
		if ((arr + i)->start >= e_time) {
			//printf("%d %d\n\n", (arr + i)->start, (arr + i)->end);
			ans++;
			e_time = (arr + i)->end;
		}
	}
	printf("%d", ans);
	free(arr);
	return 0;
}