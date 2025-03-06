#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int count = -1,tmp = 0;
    int i = 0;
    while (tmp < n) {
        tmp += i++;
        count++;
        //printf("%d\t", tmp);
        //printf("%d\n",count);
    }
    if (count%2 == 1) {
        printf("%d/%d\n",(count + 1) - (count - (tmp - n)), count - (tmp - n));
    }
    else {
        printf("%d/%d\n", count - (tmp - n), (count + 1) - (count - (tmp - n)));
    }
    return 0;
}