#include <stdio.h>

int main(void) {
    char day[8][4] = { "SUN","MON", "TUE","WED","THU","FRI","SAT" };
    int month, today;
    scanf("%d%d", &month, &today);
    int index = 1;
    while (month != 1 || today != 1) {
        index++;
        if (month == 5 || month == 7 || month == 10 || month == 12) {
            if (today == 1) {
                today = 30;
                month--;
            }
            else {
                today--;
            }
        }
        else if (month == 3) {
            if (today == 1) {
                today = 28;
                month--;
            }
            else {
                today--;
            }
        }
        else {
            if (today == 1) {
                today = 31;
                month--;
            }
            else {
                today--;
            }
        }
        if (index > 6) {
            index = 0;
        }
    }
    printf("%s", day[index]);
    return 0;
}