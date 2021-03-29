#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	int i = 2;
	int max = 1;
	int min;

	scanf("%d %d", &a, &b);

	while (!(a / i == 0 || b / i == 0)) {

		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
			max = max * i;
		}
		else {
			i++;
		}

	}

	min = max * a * b;

	printf("%d\n%d", max, min);
	return 0;
    
}
