#include <stdio.h>
int main(void) {
    int n = 0;
    int i = 1;
    int j = 1;
    int count = 0;
    scanf("%d", &n);
    while (n > i) {
        count++;
        i += 6 * j;
        j++;
    }
    printf("%d", count+1);
    return 0;
}