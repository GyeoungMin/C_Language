#include <stdio.h>

// 정적변수 (Static Variable)
// static 키워드로 선언한 변수
// ex) static int abc;
// 이렇게 선언된 정적변수는 지역변수와 전역변수의 특징을 가지고 있다.
// 함수(블록)내에서 선언된 정적변수는 전역변수처럼 단 한번(딱 한번) 초기화되며 (초기화는 최초 실행시 한번만 적용)
// 프로그램이 종료 되어야 메모리에서 삭제된다.
// 이렇게 선언된 정적변수는 지역변수처럼 해당 함수내에서 접근 가능하다.

void local1();
void global1();
void Static();

int gvar = 1;

void StaticVariable()
{
	for (int i = 0; i < 3; i++)
	{
		local1();
		global1();
		Static();
	}
	int aaa;
	aaa = gvar;
	//aaa = static_count;
}

void local1()
{
	int count = 1;
	printf("local1()함수가 %d번째 호출 되었음\n", count);
	count++;
}

void global1()
{
	printf("global1()함수가 %d번째 호출 되었음\n", gvar);
	gvar++;
}

void Static()
{
	static int static_count = 1;
	printf("Static()함수가 %d번째 호출 되었음\n", static_count);
	static_count++;
}