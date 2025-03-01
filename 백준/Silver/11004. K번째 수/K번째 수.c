#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int main(void) {
    int n,k;
    scanf("%d%d", &n, &k);
    int* array = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    qsort(array, n, sizeof(int), cmp);
    printf("%d", array[k - 1]);
    return 0;
}