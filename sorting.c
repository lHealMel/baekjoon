#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �Ƹ� �ð����⵵  O(n��)�� ���� �˰��� �ڵ�
// �Ƹ� ���� ����

int main() {
	int* arr;
	int N;
	int Min;
	int location;
	int c = 0;
	int j;
	int k = 0;

	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N); // arr[N-1]�� �ִ�

	if (arr == NULL) return -1;

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	Min = arr[0];
	location = 0;

	for (j = 0; j < N; j++) {
		if (Min > arr[j]) {
			c = arr[location];
			arr[location] = arr[j];
			arr[j] = c;
			Min = arr[location];
			j = k;
		}
		if (j == N - 1) {  //������ ���� �迭 ������ ���� ���� �� �϶� 0�� �����ϰ�
			k++;           //k++��°(1��°)���� �ٽ� ���� ���Ѵ�.
			j = k;         //���� ���������� j�� k ����
			location = k;
			Min = arr[k];  //k++��°(1��°) ���� �����Ͽ� �� �ٽ� ����
		}
	}

	for (int q = 0; q < N; q++) {
		printf("%d\n", arr[q]);		//���ĵ� �� ����
	}

	free(arr);
}