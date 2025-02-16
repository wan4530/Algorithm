#include <stdio.h>
int ans[41][2];
int main() {
    int n, k;
    scanf("%d", &n);
    ans[0][0] = 1;
    ans[0][1] = 0;
    ans[1][0] = 0;
    ans[1][1] = 1;
    for (int i = 2; i < 41; i++) {
        ans[i][0] = ans[i - 1][0] + ans[i - 2][0];
        ans[i][1] = ans[i - 1][1] + ans[i - 2][1];
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        printf("%d %d\n", ans[k][0], ans[k][1]);
    }
}