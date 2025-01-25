#include <stdio.h>
int main(void) {
    char string[101] = { 0 };
	while (1) {

		gets(string);
		
		if (string[0] == '.') {
			break;
		}

		int i = 0, j = 0;
		int cnt_B = 0, cnt_S = 0;
		int jud = 0;
		char p[101] = { 0 };

		while (string[i] != '.') {

			if (cnt_B < 0 || cnt_S < 0) {
				jud--;
				break;
			}
			if (string[i] == '(') {
				p[j] = '(';
				j++;
				cnt_S++;
			}
			else if (string[i] == ')') {
				if (p[j-1] != '(') {
					jud--;
					break;
				}
				else {
					j--;
				}
				cnt_S--;
			}
			else if (string[i] == '[') {
				p[j] = '[';
				j++;
				cnt_B++;
			}
			else if (string[i] == ']') {
				if (p[j-1] != '[') {
					jud--;
					break;
				}
				else {
					j--;
				}
				cnt_B--; 
			}
			i++;
		}
		if (cnt_B != 0 || cnt_S != 0) {
			jud--;
		}
		if (jud == 0) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
    return 0;
}