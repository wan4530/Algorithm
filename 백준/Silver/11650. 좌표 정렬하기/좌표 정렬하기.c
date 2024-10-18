#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000
typedef struct point {
	int x;
	int y;
}POINT;
POINT point[SIZE] = { 0 };
int my_struct_compfunc(const void* a, const void* b) {
	POINT* structA = (POINT*)a;
	POINT* structB = (POINT*)b;

	return (structA->x == structB->x ? structA->y - structB->y : structA->x - structB->x);
}
int main(void){
	int n;
	POINT temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &(point + i)->x, &(point + i)->y);
	}
	qsort(point, n, sizeof(POINT), my_struct_compfunc);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", point[i].x, point[i].y);
	}
	return 0;
}