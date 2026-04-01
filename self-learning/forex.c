#include <stdio.h>
int main() {
	int a[5] = { 9,1,7,3,5 }; // 정렬할 배열
	int i, j, min, t; // i: 기준 인덱스, j: 비교 인덱스, min: 최솟값 인덱스, t: 교환용 변수

	// 선택 정렬 시작
	for (i = 0;i < 4;i++) {
		min = i; // 현재 위치를 최솟값 인덱스로 초기화
		// i 다음 요소부터 끝까지 탐색하여 최솟값 찾기
		for (j = i + 1;j < 5;j++) {
			if (a[j] < a[min]) // 더 작은 값 발견 시
				min = j; // 최솟값 인덱스 갱신
		}
		// 현재 위치(i)와 최솟값(min) 위치의 값 교환
		t = a[i];
		a[i] = a[min];
		a[min] = t;
	}
	// 정렬된 배열 출력
	for (i = 0;i < 5;i++) {
		printf("%2d", a[i]);
	}
}