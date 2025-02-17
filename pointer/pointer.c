#include <stdio.h>

int b;
// 포인터
int Pointer()
{
	// int *ptr;	//포인터 변수의 선언 방식
	// 데이터 타입 *변수명 
	// 포인터의 크기는 고정값 
	// 32bit ==> 4byte
	// 64bit ==> 8byte

	int a, b;
	int n = 567;	// n의 크기는 4바이트
	char c = 'a';	// c의 크기는 1바이트
	double d = 5.7; // d의 크기는 8바이트

	int *pi;
	double *pd;
	char *pc;

	printf("int형의 포인터 크기 : %d \n", sizeof(pi));
	printf("double형의 포인터 크기 : %d \n", sizeof(pd));
	printf("char형의 포인터 크기 : %d \n", sizeof(pc));

	// 포인터의 초기화
	// ** 포인터에 절대로 직접 주소를 대입하면 안된다. **
	// 어떤 변수로 초기화 할지 모르면 0으로 초기화
	// int *ptr = 0;
	// int *ptr = NULL; //권장사항

	// & = 주소 연산자
	a = 2;

	printf("%p \n", &a);
	printf("%p \n", &b);

	/*int *p;
	p = &a;
	printf("포인터 p에 들어있는 값 : %p \n", p);
	printf("변수 a의 주소 : %p \n", &a);*/

	int *pa;
	int *pb;

	pb = &b;
	pa = &a;
	*pa = 3;


	printf("a의 값 : %d \n", a);
	printf("*pa의 값 : %d \n", *pa);
	printf("*pb의 값 : %d \n", *pb);
	
	// 포인터도 변수이다.

	//int a, b;
	int *ptr;	// int 타입의 포인터 변수 선언

	ptr = &a;	// 포인터에 a의 주소를 대입
	*ptr = 2;	// 포인터가 가리키는 곳에 2(값)을 대입
	ptr	= &b;	// 포인터가 가리키는 곳을 a -> b로 변경
	*ptr = 3;	// 이번에 가리키는 곳에 3(값)을 대입

	printf("a의 값 : %d , b의 값 : %d \n", a, b);

}