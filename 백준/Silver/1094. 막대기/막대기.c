#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int ans = 0;
    while (n>=1) {
        if (n % 2 == 1) {
            ans++;
        }
        n /= 2;
    }
    printf("%d", ans);

    return 0;
}