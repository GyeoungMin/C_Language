#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// �Լ� (Function)
// Ư���� ������ ���ؼ� ���������� ����� ���α׷� �ڵ��� ����
// ǥ���Լ�, ����� ���� �Լ�
// �ݺ����� ���α׷� -> ��ü
// �Լ� -> ���ȭ -> ������ ��� -> ��������
// �ϳ��� ����� -> �Լ�ȭ (�ϳ��� �Լ��� �������� ����� ���� ����)

//int add(x, y)	// �Լ��� ����, int <- ��ȯ���� Ÿ��
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
//	printf("���");
//}

int print_hello();
void draw_line(char ch, int len);
#define add(x,y) (x+y)

int Function()
{
	printf("�Լ��� �ҷ� ���ô� : ");
	print_hello();

	printf("�Լ��� �� �ҷ� ���ô� : ");
	print_hello();

	draw_line('*', 10);

	int a, b, sum;
	a = 3;
	b = 5;
	sum = add(a, b);
	printf("a, b�� ���� : %d", sum);

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