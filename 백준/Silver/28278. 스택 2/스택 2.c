#include <stdio.h>
#include <stdlib.h>
int stack[1000000];
int top = -1;
void push() {
	int n;
	scanf("%d\n", &n);
	stack[++top] = n;
}
int pop() {
	if (top == -1) {
		return -1;
	}
	else {
		return stack[top--];
	}
}
int is_empty() {
	return (top == -1);
}
int peek() {
	if (top == -1) {
		return -1;
	}
	else {
		return stack[top];
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		if (temp == 1) {
			push();
		}
		else if (temp == 2) {
			printf("%d\n",pop());
		}
		else if (temp == 3) {
			printf("%d\n", top+1);
		}
		else if (temp == 4) {
			printf("%d\n",is_empty());
		}
		else {
			printf("%d\n",peek());
		}
	}
	return 0;
}