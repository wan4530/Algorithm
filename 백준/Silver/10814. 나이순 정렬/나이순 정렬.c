#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000
typedef struct member {
	int age;
	char name[101];
}MEMBER;
MEMBER member[SIZE] = { 0 };
int my_struct_compfunc(const void* a, const void* b) {
	MEMBER* structA = (MEMBER*)a;
	MEMBER* structB = (MEMBER*)b;

	return (structA->age - structB->age);
}
int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &(member+i)->age, &(member + i)->name);
	}
	qsort(member, n, sizeof(MEMBER), my_struct_compfunc);
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", member[i].age, member[i].name);
	}
	return 0;
}