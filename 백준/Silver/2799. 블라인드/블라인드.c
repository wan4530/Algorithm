#include <stdio.h>
int arr[5];
char window[501][501];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n * 5 + 1; i++) {
        scanf("%s", &window[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int state = 0;
            for (int k = 0; k < 4; k++) {
                if (window[(i * 5) + 1 + k][(5 * j) + 1] == '*') {
                    state++;
                }
            }
            arr[state]++;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}