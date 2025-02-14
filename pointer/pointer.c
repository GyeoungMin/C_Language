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
	int a;
	a = 2;

	printf("%p \n", &a);
	printf("%p \n", &b);

	/*int *p;
	p = &a;
	printf("포인터 p에 들어있는 값 : %p \n", p);
	printf("변수 a의 주소 : %p \n", &a);*/

	int *p;
	int *pj;
	int j;

	pj = &j;
	p = &a;
	*p = 3;


	printf("a의 값 : %d \n", a);
	printf("*p의 값 : %d \n", *p);
	printf("pc의 값 : %d \n", *pj);

}