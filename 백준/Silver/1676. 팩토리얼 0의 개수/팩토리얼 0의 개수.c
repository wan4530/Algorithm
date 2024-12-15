#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int m5, m25, m125;
    m5 = n / 5;
    m25 = n / 25;
    m125 = n / 125;
    printf("%d", m5 + m25 + m125);
    return 0;
}