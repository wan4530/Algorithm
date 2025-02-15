#include <stdio.h>
#include <stdlib.h>
int arr[10000];
int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int j = i;
        while (sum <= target) {
            sum += arr[j++];
            if (sum == target) {
                ans++;
                break;
            }
            if (j >= n && sum < target) {
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}