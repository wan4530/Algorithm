#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, y, inventory;
    scanf("%d %d %d", &x, &y, &inventory);
    int** map = (int**)malloc(sizeof(int*) * x);
    for (int i = 0; i < x; i++) {
        map[i] = (int*)malloc(sizeof(int) * y);
    }
    int avg = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &map[i][j]);
        }
    }
    int time = 2147483647;
    int hight = 256;
    int h = 0;
    int k = 0;
    while (k<=256) {
        int mintime = 0;
        int temp = inventory;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (hight < map[i][j]) {
                    mintime += ((map[i][j] - hight) * 2);
                    temp += (map[i][j] - hight);
                }
                else if (hight > map[i][j]) {
                    mintime += (hight - map[i][j]);
                    temp -= (hight - map[i][j]);
                }
            }
        }
        if (temp >= 0) {
            if (mintime < time) {
                time = mintime;
                h = hight;
            }
        }
        hight--;
        k++;
    }
    printf("%d %d", time, h);
    return 0;
}