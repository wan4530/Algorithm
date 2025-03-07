#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int class[6];
    int same;
}student;
int main(void) {
    int ans = 1;
    int n;
    scanf("%d", &n);
    student* s = (student*)calloc(n,sizeof(student));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &(s+i)->class[j]);
            //(s + i)->same = 0;
        }
    }
    int max = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int jud = 0;
            for (int h = 0; h < 5; h++) {
                if ((s + i)->class[h] == (s + j)->class[h]) {
                    (s + i)->same += 1;
                    (s + j)->same += 1;
                    jud++;
                }
                if (jud != 0) {
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (max < (s + i)->same) {
            max = (s + i)->same;
            ans = i+1;
        }
    }
    printf("%d", ans);
    free(s);
    return 0;
}