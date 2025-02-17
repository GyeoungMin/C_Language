#include <stdio.h>

// ����ü ������
struct test
{
	int a, b;	// ����� 2��
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
	struct test *ptr;	// struct test���� ����Ű�� ������ ���� ����
						// ����� ����ü�� �ƴϴ�(�̴� �������̴�)

	ptr = &st;

	// �����ͷ� ����ü�� �����ϴ� ����̴�.
	//(*ptr).a = 1;
	//(*ptr).b = 2;

	// ���� �����ڸ� ��� �ϸ� �Ʒ��� ���� �ۼ��� �� �ִ�.
	ptr->a = 1;
	ptr->b = 2;

	printf("st.a �� : %d, st.d �� : %d \n", st.a, st.b);
	printf("(*ptr).a �� : %d, (*ptr).b �� : %d\n", (*ptr).a, (*ptr).b);
	printf("ptr->a �� : %d, ptr->b �� : %d\n", ptr->a, ptr->b);

	CONTACT ct = { "�輮��", "01022223333", 0 };
	CONTACT *ctptr = &ct;

	ctptr->ringtone = 5;
	strcpy(ctptr->phone, "010333344444");

	// ** �߿� (*cptr).phone ====> cptr->phone ** 
	printf("��ȭ��ȣ : %s \n", ctptr->phone);

	struct pointer t;
	struct pointer *pt = &t;
	int i = 0;

	// . �̤� * ���� �켱 ������ ����.
	t.pointer = &i;	// t�� ����� pointer�� i�� ����Ų��
	*t.pointer = 3;	// t�� ��� pointer�� ����Ű�� ���� ���� 3���� �����Ѵ�.

	printf("i : %d \n", i);

	// -> �� * ���� �켱 ������ ����. 
	// pt�� ����Ű�� ����ü ������ pointer����� ����Ű�� ������ ���� 4�� ����
	*pt->pointer = 4;

	printf("i : %d \n", i);

	// ������ ����
	struct practice prac;
	struct practice *pracptr = &prac;

	// pracptr�� ����Ű�� ����ü ������ c������� 0���� �ʱ�ȭ
	pracptr->c = 0;

	// add_one �Լ��� ���ڰ����� prac����ü ������ ��� c�� �ּҰ��� ����
	add_one(&prac.c);

	printf("prac.c : %d\n", prac.c);

	add_one(&pracptr->c);

	printf("prac.c : %d\n", prac.c);
}

// ����ü ����� ����ü ������ ��� �� �� �ִ�.