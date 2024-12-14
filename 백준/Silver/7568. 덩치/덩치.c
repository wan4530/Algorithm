#include <stdio.h>
int main(void) {
    int t;
    int w[50], h[50];
    int r[50] = { 0 };
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &w[i], &h[i]);
    }
    for (int i = 0; i < t; i++) {
        for(int j = 0; j<t;j++){
            if (w[i] < w[j] && h[i] < h[j]) {
                r[i]++;
            }
        }
    }
    
    for (int i = 0; i < t; i++) {
        printf("%d ", r[i]+1);
    }
    return 0;
}