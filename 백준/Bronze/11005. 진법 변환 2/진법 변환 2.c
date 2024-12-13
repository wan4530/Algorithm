#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    char num[30] = {0};
    int sst;
    long long dec;
    scanf("%lld %d",&dec, &sst);
    int i = 0;
    while (dec > 0.5) {
        if (dec % sst < 10) {
            num[i] = (dec % sst) + 48;
        }
        else {
            num[i] = dec % sst + 55;
        }
        dec /= sst;
        i++;
    }
    for (int j = i-1; j >= 0; j--) {
        printf("%c", num[j]);
    }
    return 0;
}