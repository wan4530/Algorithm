#include <stdio.h>
int money[100000];
int main(void) {
    int k;
    int len = 0;
    int sum = 0;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        int n;
        scanf("%d", &n);
        if (n != 0) {
            money[len] = n;
            len++;
        }
        else {
            len --;
            money[len] = 0;
        }
    }
    for (int i = 0; i < len; i++) {
        sum += money[i];
    }
    printf("%d", sum);
    return 0;
}