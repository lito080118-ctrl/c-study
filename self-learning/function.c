#include <stdio.h>
int digit(int n) {
	if (n < 10)return n; // 한 자리 수이면 그대로 반환
	return (n % 10) + digit(n / 10); // 마지막 자리 + 나머지 자리들의 합
}
int main() {
	printf("%d", digit(235)); // 각 자리수의 합 출력 (2+3+5=10)
}