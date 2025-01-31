#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char p[21];
	char password[21];
}pp;
pp PP[100001];
int cmp(const pp* a, const pp* b) {
	return (strcmp(a->p, b->p));
}
int binsr(char* key, int low, int high) {
	int middle = (low + high) / 2;
	if (strcmp(key, PP[middle].p) == 0) {
		return middle;
	}
	else if (strcmp(key, PP[middle].p) < 0) {
		return(binsr(key, low, middle - 1));
	}
	else {
		return(binsr(key, middle + 1, high));
	}
}
int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s %s", &PP[i].p, &PP[i].password);
	}
	qsort(PP, n, sizeof(pp), cmp);
	for (int i = 0; i < m; i++) {
		char temp[21] = { 0 };
		scanf("%s", temp);
		printf("%s\n",PP[binsr(temp,0,n)].password);
	}
	return 0;
}