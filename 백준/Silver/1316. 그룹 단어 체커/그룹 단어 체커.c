#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int ans = n;
    for (int i = 0; i < n; i++) {
        char w[101] = { 0 };
        scanf("%s", w);
        int alpha[27] = { 0 };
        char temp = w[0];
        int j = 1;
        alpha[w[0] - 'a']++;
        while (w[j] != '\0') {
            if (temp != w[j] && alpha[w[j]-'a'] != 0) {
                ans--;
                break;
            }
            else if (temp != w[j] && alpha[w[j] - 'a'] == 0) {
                temp = w[j];
                alpha[w[j] - 'a']++;
            }
            j++;
        }
    }
    printf("%d", ans);
    return 0;
}