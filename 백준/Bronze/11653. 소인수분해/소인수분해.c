#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int i = 2;
    while (1) {
        if (n % i == 0) {
            printf("%d\n",i);
            n /= i;
        }
        else {
            i++;
        }
        if (n == 1) {
            break;
        }
    }
    return 0;
}