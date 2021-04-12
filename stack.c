#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int j = 0;
int count = 0;
int num[10001] = { 0, };


int push(int a, int j) {
	return num[j] = a;
}

int top() {
	if (num[0] != 0) {
		return printf("%d\n", num[j - 1]);
	}
	else {
		return printf("-1\n");
	}
}

int size() {
	return printf("%d\n", count);
}

int empty() {
	if (num[0] == 0) {
		return printf("1\n");
	}
	else {
		return printf("0\n");
	}
}

int pop() {
	if (num[0] != 0) {
		int c = num[j - 1];
		num[j - 1] = 0;
		count--;
		j--;
		return printf("%d\n", c);
	}
	else {
		return printf("-1\n");
	}

}

int main() {
	int N;
	scanf("%d", &N);
	char a[6];
	int number;


	for (int i = 0; i < N; i++) {
		scanf("%s", a);
		if (a[0] == 's') {
			size();
		}
		else if (a[0] == 'e') {
			empty();
		}
		else if (a[0] == 't') {
			top();
		}
		else if (a[0] == 'p' && a[1] == 'o') {
			pop();
		}
		else if (a[0] == 'p' && a[1] == 'u') {
			scanf("%d", &number);
			push(number, j);
			j++;
			count++;
		}

	}

}
