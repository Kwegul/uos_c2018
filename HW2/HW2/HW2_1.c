#include <stdio.h>
#include <stdlib.h>

// 재귀함수를 이용하여 10진수를 base진수로 변환하는 함수

void convert(int num, int base) {
	// 재귀함수의 기저 조건: num이 0이면 더 이상 변환이 불가능하므로 반환
	if (num == 0) return;

	// num을 base로 나눈 몫에 대해 convert 함수를 재귀적으로 호출
	convert(num / base, base);

	// num을 base로 나눈 나머지 계산
	int remainder = num % base;

	// 나머지를 문자로 변환하여 출력
	// 숫자일 경우, '0'~'9'로 변환하고 문자일 경우, 'A'~'F'로 변환
	char c;
	if (remainder < 10) {
		c = remainder + '0'; // 숫자일 경우
	}
	else {
		c = remainder - 10 + 'A'; // 문자일 경우
	}
	printf("%c", c);
}

int main() {
	int num, base;

	// 10진수를 입력 받음
	printf("10진수를 입력하세요: \n");
	scanf_s("%d", &num);

	// 변환할 진법을 입력 받음
	printf("변환할 진법을 입력하세요(2~16): \n");
	scanf_s("%d", &base);

	// 변환된 결과 출력
	printf("%d의 %d진수 변환 값 :  ", num, base);
	convert(num, base);
	printf("\n");

	return 0;
}