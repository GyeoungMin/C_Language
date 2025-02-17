#include <stdio.h>

// 열거형 (enum)
// 정수형 변수가 특정한 값들 중 한가지 값을 가질 때 유용하게 사용
// 열거형 값은 처음에만 할당해 주면 이어지는 변수는 자동으로 1씩 증가된다.

//const int value1 = 1;
//const int value2 = 2;
//const int value3 = 3;

typedef enum {
	value1 = -3,	// 1 
	value2,			// 2
	value3,			// 3
	value4,			// 4
	value5 = 10,	// 10
	value6,			// 11
	value7,			// 12
	value8			// 13
}VALUE;

int main()
{
	printf("value1 : %d \n", value1);
	printf("value2 : %d \n", value2);
	printf("value3 : %d \n", value3);
	printf("value5 : %d \n", value5);
	printf("value6 : %d \n", value6);
	printf("value7 : %d \n", value7);

	enum VALUE aa;
	
	aa = value8;

	printf("aa : %d\n", aa);

	return 0;
}