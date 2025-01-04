#include <stdio.h>
#include <stdlib.h>
int df[300000] = { 0 };
int cmp(const int* a, const int* b) {
    return(*a - *b);
}
int avr(int pr, int t) {
    int sum = 0;
    for (int i = pr; i < t - pr; i++) {
        sum += df[i];
    }
    pr *= 2;
    t -= pr;
    return (float)sum / (float)t + 0.5;
}
int main(void) {
    int n;
    int pr;
    int vl;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    pr = (float)n * 0.15 + 0.5;
    for (int i = 0; i < n; i++) {
        scanf("%d", &df[i]);
    }
    qsort(df,n,sizeof(int),cmp);
    vl = avr(pr, n);
    printf("%d", vl);
    return 0;
}