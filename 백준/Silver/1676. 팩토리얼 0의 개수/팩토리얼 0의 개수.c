#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int count = 0;
    int i = 1;
    while (25*i<=n) {
        i++;
    }
    count += i;
    i = 1;
    while (125 * i <= n) {
        i++;
    }
    count += i;
    while (n>=0) {
        n -= 5;
        count++;
    }
    printf("%d", count-3);
    return 0;
}