#include <stdio.h>
int main (void){
    int sum = 0;
    for(int i = 0; i<5;i++){
        int temp;
        scanf("%d",&temp);
        sum += temp;
    }
    printf("%d",sum);
    return 0;}