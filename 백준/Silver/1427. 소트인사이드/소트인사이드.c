#include <stdio.h>
#include <stdlib.h>

int cmp(const char* a, const char* b) {
    return(*b - *a);
}
char arr[11];
int main(void) {
    scanf("%s", arr);
    qsort(arr, strlen(arr), sizeof(char), cmp);
    
    printf("%s", arr);
    return 0;
}