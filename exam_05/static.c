#include <stdio.h>

// �������� (Static Variable)
// static Ű����� ������ ����
// ex) static int abc;
// �̷��� ����� ���������� ���������� ���������� Ư¡�� ������ �ִ�.
// �Լ�(���)������ ����� ���������� ��������ó�� �� �ѹ�(�� �ѹ�) �ʱ�ȭ�Ǹ� (�ʱ�ȭ�� ���� ����� �ѹ��� ����)
// ���α׷��� ���� �Ǿ�� �޸𸮿��� �����ȴ�.
// �̷��� ����� ���������� ��������ó�� �ش� �Լ������� ���� �����ϴ�.

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
	printf("local1()�Լ��� %d��° ȣ�� �Ǿ���\n", count);
	count++;
}

void global1()
{
	printf("global1()�Լ��� %d��° ȣ�� �Ǿ���\n", gvar);
	gvar++;
}

void Static()
{
	static int static_count = 1;
	printf("Static()�Լ��� %d��° ȣ�� �Ǿ���\n", static_count);
	static_count++;
}