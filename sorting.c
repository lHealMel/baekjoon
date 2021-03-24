#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 아마 시간복잡도  O(n²)인 정렬 알고리즘 코드
// 아마 삽입 정렬

int main() {
	int* arr;
	int N;
	int Min;
	int location;
	int c = 0;
	int j;
	int k = 0;

	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N); // arr[N-1]이 최대

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
		if (j == N - 1) {  //선택한 수가 배열 내에서 가장 작은 수 일때 0에 저장하고
			k++;           //k++번째(1번째)부터 다시 수를 비교한다.
			j = k;         //위의 이유때문에 j에 k 대입
			location = k;
			Min = arr[k];  //k++번째(1번째) 수를 선택하여 비교 다시 시작
		}
	}

	for (int q = 0; q < N; q++) {
		printf("%d\n", arr[q]);		//정렬된 수 나열
	}

	free(arr);
}