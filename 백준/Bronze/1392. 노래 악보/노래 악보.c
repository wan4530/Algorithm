#include <stdio.h>
int k[10000] = { 0 };
int main() {
    int n, q, a, b[1000] = { 0 };
    int h = 0;
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        for (int j = h; j < a + h; j++) {
            k[j] = i + 1;
        }
        h += a;
    }
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
        printf("%d\n", k[b[i]]);
    }
    return 0;
}