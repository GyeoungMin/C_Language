#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// 조건 연산자 (삼항 연산자)
int Conditional() {
	uint8_t a = 1;
	uint8_t b = 0;

	bool ret;
	//uint8_t ret;

	// exp1 ? exp2 : exp 3
	// 만약 exp1이 참이면,, exp2를 수행 / 그렇지않으면 exp3을 수행 (삼항에서는 거짓이라고 하지않음)
	ret = a || b ? 1 : 2;
	printf("%d \n", ret);

	ret = a && b ? 1 : 2;
	printf("%d \n", ret);

	return 0;
}