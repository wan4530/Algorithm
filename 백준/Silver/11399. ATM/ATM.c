#include <stdio.h>
#include <stdlib.h>

int cmp(const int* a, const int* b) {
    return(*a - *b);
}
int arr[1000];
int main(void) {
    int n;
    int sum = 0;
    int total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        total += sum;
    }
    printf("%d", total);
    return 0;
}