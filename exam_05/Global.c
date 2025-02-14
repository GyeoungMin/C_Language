#include <stdio.h>

// 전역변수 (Global Variable)
// 함수의 외부에서 선언된 변수이다.
// 프로그램의 어디에서나 접근이 가능하다.
// 프로그램이 종료되어야 메모리에서 삭제된다.
// 메모리의 DATA영역에 저장된다.
// 초기화 하지 않아도 ......0으로 자동 초기화 된다.

int var;

void GlobalVariable()
{
	printf("전역 변수 var의 값은 : %d\n", var);
	int i = 5;
	int var = 10;
	printf("main()함수 내에서의 지역 변수 var의 값은 : %d\n", var);

	if (i < 10)
	{
		local();
		printf("if문 내에서의 변수 var의 값은 : %d\n", var);
	}
	printf("현재 지역 변수 var의 값은 : %d\n", var);
}
