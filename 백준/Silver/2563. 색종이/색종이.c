#include <stdio.h>
int point[100][100];

int main() {
    int t;
    int sum = 0;
    int x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &x, &y);
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                if (point[i][j] == 0) {
                    sum++;
                    point[i][j] = 1;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}