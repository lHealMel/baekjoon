#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int N = 0;
	scanf("%d", &N);
	int* count = NULL;

	count = (int*)malloc(sizeof(int) * N);


	int** num = NULL;

	num = (int**)malloc(sizeof(int*) * N);

	for (int i = 0; i < N; i++) {
		num[i] = (int*)malloc(sizeof(int) * 2);
	}

	for (int q = 0; q < N; q++) {
		count[q] = 1;
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &num[i][j]);
		}
	}

	for (int q = 0; q < N; q++) {
		for (int k = 0; k < N ; k++){
			if (num[q][0] < num[k][0] && num[q][1] < num[k][1]) {
				count[q]++;
			}
		}

	}


	for (int t = 0; t < N; t++) {
		printf("%d ", count[t]);
	}


	for (int i = 0; i < N; i++) {
		free(num[i]);
	}
	free(num);
	free(count);



}
