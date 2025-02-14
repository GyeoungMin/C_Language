#include <stdio.h>

// 산술연산자 연습
int Arithmetic() {

	int a = 39, b = 17, result;

	result = a + b;
	printf("a + b = %d \n", result);

	result = a - b;
	printf("a - b = %d \n", result);

	result = a * b;
	printf("a * b = %d \n", result);

	result = a / b;
	printf("a / b = %d \n", result);

	result = a % b;	//나머지
	printf("a %% b = %d \n", result);

	return 0;
}