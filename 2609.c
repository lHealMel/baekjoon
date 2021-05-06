#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int i = 2;
	int gcd = 1;
	int lcm = 1;

	scanf("%d %d", &a, &b);

	while (!(a / i == 0 || b / i == 0)) {

		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
			gcd = gcd * i;
		}
		else {
			i++;
		}

	}

	lcm = gcd * a * b;

	printf("%d\n%d", gcd, lcm);
	return 0;
	// ab = gdc * lcm
	// 유클리드 알고리즘으로 재귀함수 사용해서 풀어보자(GCD)
}
