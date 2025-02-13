#include <stdio.h>
int arr[100000];
int cpy[100000];
char m[200000];
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int j = 1;
	int h = 0;
	int k = 0;
	cpy[h] = j;
	m[0] = '+';
	for (int i = 1; i < 2*n; i++) {
		if (arr[k] == cpy[h]) {
			k++;
			h--;
			m[i] = '-';
		}
		else {
			h++;
			j++;
			cpy[h] = j;
			m[i] = '+';
		}
	}
	if (m[(n * 2) - 1] == '+') {
		printf("NO");
	}
	else {
		for (int i = 0; i < n * 2; i++) {
			printf("%c\n", m[i]);
		}
	}
	return 0;
}