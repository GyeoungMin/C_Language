#include <stdio.h>

// 지역변수 (Local Variable)
// "블록" 내에서 선언된 변수이다.
// 선언된 "블록" 내에서만 유효하다.
// "블록" 이 종료되면 메모리에서 삭제된다.
// 메모리의 STACK영역에 저장된다.
// 초기화 하지 않으면 쓰레값이 되어 있다. -> 의미 없는 값
// 함수의 매개변수도 정의되는 함수의 지역변수로 취급된다.

void local();

void LocalVariable() 
{
	int i = 5;
	int var = 10;
	printf("main()함수 내에서의 지역 변수 var의 값은 : %d\n", var);

	if (i < 10)
	{
		local();
		int var = 30;
		printf("if문 내에서의 지역 변수 var의 값은 : %d\n", var);
	}
	printf("현재 지역 변수 var의 값은 : %d\n", var);
	
}

void local()
{
	int var = 20;
	printf("local()함수 내에서의 지역 변수 var의 값은 : %d\n", var);
}