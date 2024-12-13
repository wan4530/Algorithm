#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    char num[30];
    int sst;
    double dec = 0;
    int k;
    scanf("%s %d",&num, &sst);
    for (int i = 0; i < strlen(num); i++) {
        if (num[i]>='0'&&num[i]<='9') {
            k = num[i] - '0';
        }
        else if (num[i] >= 'A' && num[i] <= 'Z') {
            k = num[i] - 'A' + 10;
        }
        dec += k * pow(sst, strlen(num) - i-1);
    }
    printf("%.0lf", dec);
    return 0;
}