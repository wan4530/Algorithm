#include <stdio.h>
#include <stdlib.h>
typedef struct po {
    int n;
    char name[21];
}poketmon;
poketmon po[100001];
char cpy_poket[100001][21];

int cmp(const poketmon* a, const poketmon* b) {
    return (strcmp(a->name, b->name));
}
int binary(char* key, int low, int high) {
    int middle;
    if (low <= high) {
        middle = (low + high) / 2;
        if (strcmp(key, po[middle].name) == 0) {
            return po[middle].n;
        }
        else if (strcmp(key, po[middle].name) < 0) {
            return binary(key, low, middle - 1);
        }
        else {
            return binary(key, middle + 1, high);
        }
    }
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", &cpy_poket[i]);
        strcpy(po[i].name, cpy_poket[i]);
        po[i].n = i + 1;
    }
    qsort(po, n, sizeof(poketmon), cmp);
    for (int i = 0; i < m; i++) {
        char qst[21] = { 0 };
        scanf("%s", qst);
        if (qst[0] >= '0' && qst[0] <= '9') {
            printf("%s\n", cpy_poket[atoi(qst) - 1]);
        }
        else {
            printf("%d\n", binary(qst, 0, n));
        }
    }
    return 0;
}