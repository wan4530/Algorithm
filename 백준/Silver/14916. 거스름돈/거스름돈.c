#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int ans = 0;
    while (n!=0) {
        if (n == 1) {
            ans = -1;
            break;
        }
        if (n % 5 == 0) {
            ans += (n / 5);
            n = 0;
        }
        else {
            ans++;
            n -= 2;
        }
    }
    printf("%d", ans);
    return 0;
}