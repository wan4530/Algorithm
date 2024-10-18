#include <stdio.h>
int main() {
    int n, x, s, t;
    int j = -1;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &t);
        if (s + t <= x) {
            if (j < s) {
                j = s;
            }
        }
    }
    printf("%d", j);
    return 0;
}