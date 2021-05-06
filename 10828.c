#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void push(int, int);
void top();
void size();
void empty();
void pop();

int j = 0;               //위치를 설정하기 위한, 인덱스변수
int count = 0;           //size를 계산하기 위한 변수
int num[10001] = { 0, }; //스택의 공간을 array로 만들었고, 0으로 초기화해서 
                         //비어있는 상태(empty)로 두었다.
int main() {
	int N;
	scanf("%d", &N);
	char a[6];
	int number;

	for (int i = 0; i < N; i++) { //어떤 명령어가 들어왔는지 확인하기
		scanf("%s", a);    //사실 gets같은걸로 받으면 쉬운데, 생각나는게 scanf밖에 없었다..    
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

void push(int a, int j) {
	num[j] = a;
}

void top() {
	if (num[0] != 0) {
		printf("%d\n", num[j - 1]);
	}
	else {
		printf("-1\n");
	}
}

void size() {
	printf("%d\n", count);
}

void empty() {
	if (num[0] == 0) { //비어있다면 가장 밑에 단
		printf("1\n");   //즉 index가 0인 부분이 비어있다면 비어있는 것이다.
	}
	else {
		printf("0\n");
	}
}

void pop() {
	if (num[0] != 0) {
		int c = num[j - 1];
		num[j - 1] = 0;
		count--;
		j--;
		printf("%d\n", c);
	}
	else {
		printf("-1\n");
	}

}
