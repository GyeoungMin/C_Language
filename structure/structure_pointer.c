#include <stdio.h>

// 구조체 포인터
struct test
{
	int a, b;	// 멤버가 2개
};

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
}CONTACT;

struct pointer
{
	int c;
	int *pointer;
};

struct practice
{
	int c;
};

void add_one(int *a)
{
	*a += 1;
	// *a = *a + 1;
}

void StructurePointer()
{
	struct test st;
	struct test *ptr;	// struct test형을 가리키는 포인터 변수 선언
						// 절대로 구조체가 아니다(이는 포인터이다)

	ptr = &st;

	// 포인터로 구조체에 접근하는 방법이다.
	//(*ptr).a = 1;
	//(*ptr).b = 2;

	// 간접 연산자를 사용 하면 아래와 같이 작성할 수 있다.
	ptr->a = 1;
	ptr->b = 2;

	printf("st.a 값 : %d, st.d 값 : %d \n", st.a, st.b);
	printf("(*ptr).a 값 : %d, (*ptr).b 값 : %d\n", (*ptr).a, (*ptr).b);
	printf("ptr->a 값 : %d, ptr->b 값 : %d\n", ptr->a, ptr->b);

	CONTACT ct = { "김석진", "01022223333", 0 };
	CONTACT *ctptr = &ct;

	ctptr->ringtone = 5;
	strcpy(ctptr->phone, "010333344444");

	// ** 중요 (*cptr).phone ====> cptr->phone ** 
	printf("전화번호 : %s \n", ctptr->phone);

	struct pointer t;
	struct pointer *pt = &t;
	int i = 0;

	// . 이ㄴ * 보다 우선 순위가 높다.
	t.pointer = &i;	// t의 멤버인 pointer은 i를 가리킨다
	*t.pointer = 3;	// t의 멤버 pointer이 가리키는 곳의 값을 3으로 변경한다.

	printf("i : %d \n", i);

	// -> 가 * 보다 우선 순위가 높다. 
	// pt가 가리키는 구조체 변수의 pointer멤버가 가리키는 변수의 값을 4로 대입
	*pt->pointer = 4;

	printf("i : %d \n", i);

	// 마지막 연습
	struct practice prac;
	struct practice *pracptr = &prac;

	// pracptr이 가리키는 구조체 변수의 c멤버값을 0으로 초기화
	pracptr->c = 0;

	// add_one 함수의 인자값으로 prac구조체 변수의 멤버 c의 주소값을 전달
	add_one(&prac.c);

	printf("prac.c : %d\n", prac.c);

	add_one(&pracptr->c);

	printf("prac.c : %d\n", prac.c);
}

// 구조체 멤버로 구조체 변수를 사용 할 수 있다.