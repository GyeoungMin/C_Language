#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 관계 연산자
int Relational() {
	int a, b;

	printf("두 개의 정수를 입력하시오.\n");
	scanf("%d %d", &a, &b);

	printf("%d > %d : %d \n", a, b, a > b);
	printf("%d > %d : %d \n", a, b, a < b);
	printf("%d > %d : %d \n", a, b, a >= b);
	printf("%d > %d : %d \n", a, b, a <= b);
	printf("%d > %d : %d \n", a, b, a == b);
	printf("%d > %d : %d \n", a, b, a != b);

	return 0;
}