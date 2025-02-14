#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// 함수 (Function)
// 특별한 목적을 위해서 독립적으로 설계된 프로그램 코드의 집합
// 표준함수, 사용자 정의 함수
// 반복적인 프로그램 -> 대체
// 함수 -> 모듈화 -> 가독성 향상 -> 유지보수
// 하나의 기능을 -> 함수화 (하나의 함수에 여러가지 기능을 넣지 말것)

//int add(x, y)	// 함수의 선언, int <- 반환값의 타입
//{
//	int c;
//	return c = x + y;
//}
//
//void abc(x, y)
//{
//	int* c;
//	*c = x + y;
//}
//
//void aff(void)
//{
//	printf("출력");
//}

int print_hello();
void draw_line(char ch, int len);
#define add(x,y) (x+y)

int Function()
{
	printf("함수를 불러 봅시다 : ");
	print_hello();

	printf("함수를 또 불러 봅시다 : ");
	print_hello();

	draw_line('*', 10);

	int a, b, sum;
	a = 3;
	b = 5;
	sum = add(a, b);
	printf("a, b의 합은 : %d", sum);

	return 0;
}

int print_hello()
{	
	//bool ret = true;
	printf("Hello World!\n");
	//return ret;
	return 0;
}

void draw_line(char ch, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}