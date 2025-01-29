#include <stdio.h>
int main (void){
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	while (1) {
		for (int j = 0; j < 4; j++) {
			int temp = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				for (int k = 0; k < 5; k++) {
					printf("%d ", arr[k]);
				}
				printf("\n");
			}
		}
		int jud = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[j] != j + 1) jud--;
		}
		if (jud == 0) {
			break;
		}
	}
	return 0;
}