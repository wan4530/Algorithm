#include <stdio.h>
char board[51][51];
int main(void) {
	int x, y;
	int jd = 0;
    int count[1849] = {0};
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x; i++) {
		scanf("%s", board[i]);
	}
	int idx = 0;
	for (int k = 0; k < x - 7; k++) {
		for (int h = 0; h < y - 7; h++) {
            int count_w = 0;
            int count_b = 0;
			for (int i = k; i < 8 + k; i++) {
                for (int j = h; j < 8 + h; j++) {
					if (board[i][j] == 'B' && (i+j-k-h) % 2 == 1) {
						count_w++;
					}
					else if(board[i][j] == 'W' && (i+j-k-h) % 2 == 0) {
						count_w++;
					}
					if (board[i][j] == 'B' && (i+j-k-h) % 2 == 0) {
						count_b++;
					}
					else if (board[i][j] == 'W' && (i+j-k-h) % 2 == 1) {
						count_b++;
					}
				}
			}
            if(count_w<count_b){
                count[idx] = count_w;
            }
            else count[idx] = count_b;
			idx++;
		}
	}
    int min = 0;
	for (int i = 0; i < (x - 7) * (y - 7); i++) {
		if (count[min] > count[i]) {
			min = i;
		}
	}
	printf("%d",count[min]);
	return 0;
}