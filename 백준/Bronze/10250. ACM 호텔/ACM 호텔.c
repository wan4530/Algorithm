#include <stdio.h>
int main(void) {
    int h, w, n;
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int f = 0;
        int p = 0;
        scanf("%d %d %d", &h, &w, &n);
        f = n % h;
        p = (n / h) + 1;
        if (f==0){
            f=h;
            p -= 1;
        }
        printf("%d\n",100*f+p);
    }
    return 0;
}