#include <stdio.h>

// 상수(const) 포인터

void ConstPointer()
{
	const int *cptr;	// 읽기 전용 포인터
	// 포인터가 가리키는 변수의 값을 변경할 수 없다
	// 포인터 자신의 값(주소)변경 가능
	// 일반적으로 선언시에는 NULL로 초기화 하고 특정시점에 사용

	int a, b;
	cptr = &a;

	//*cptr = 3;	// *에 빨간줄이 생기며 오류로 표현되며 값의 변경이 불가능하다.
	cptr = &b;	
	// 이와같이 주소의 값(포인터)의 값은 변경 가능하지만, 포인터가 가리키는 주소에 값은 변경이 불가능하다.

	int *const ptrc = &a;	// 특정변수 전용 포인터
	// 포인터 자신의 값(주소) 변경 불가 => 다른변수를 가리킬 수 없다.
	// 포인터가 가리키는 곳(변수)의 값 변경 가능
	// 선언시에는 반드시 참조하려는 값으로 초기화 해야한다.

	*ptrc = 3;
	//ptrc = &b;
	// 이와 같이 주소의 값(포인터)의 값은 변경이 불가능하지만, 포인터가 가리키는 주소에 값은 변경이 가능하다.

	const int *const cptrc;	// 주소의 값과 주소에 값, 둘다 변경이 불가능하며 보통 쓰지 않는다.(define하는것이 더 좋을것으로 보인다.)

	// 포인터의 덧셈
	int *pa;
	pa = &a;

	printf("pa의 값(주소) : %p \n", pa);
	printf("(pa + 1)의 값(주소) : %p \n", pa + 1);	
	// int 타입이기때문에 +1을 할경우 4byte가 더해진다.
	// 따라서 char는 1byte, short는 2byte, doublb은 8byte

	int n;
	char c;
	double d;

	int *pn = &n;
	char *pc = &c;
	double *pd = &d;

	printf("pn의 값(주소) : %p \n", pn);
	printf("(pn + 1)의 값(주소) : %p \n", pn + 1);

	printf("pc의 값(주소) : %p \n", pc);
	printf("(pc + 1)의 값(주소) : %p \n", pc + 1);

	printf("pd의 값(주소) : %p \n", pd);
	printf("(pd + 1)의 값(주소) : %p \n", pd + 1);

	// 포인터끼리의 덧셈 (불가능하다.)
	int *pb = &b;
	
	//int *pp = pa + pb;	// 주소 이기 때문에 포인터 끼리는 불가능하다.

	// 포인터 대입
	*pa = a;
	
	*pa = 3;
	pb = pa;	// 포인터변수 pb의 값(주소) pa에 대입(주소)

	printf("pa가 가리키는 곳(주소) : %p, pa가 가리키는 곳(값) : %d \n", pa, *pa);
	printf("pb가 가리키는 곳(주소) : %p, pb가 가리키는 곳(값) : %d \n", pb, *pb);

	pb = &pa;	// 포인터변수 pb의 값(주소) pa의 값(주소)를 대입
	printf("pb가 가리키는 곳(주소) : %p, pb가 가리키는 곳(값) : %d \n", pb, *pb);
}
