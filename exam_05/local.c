#include <stdio.h>

// �������� (Local Variable)
// "���" ������ ����� �����̴�.
// ����� "���" �������� ��ȿ�ϴ�.
// "���" �� ����Ǹ� �޸𸮿��� �����ȴ�.
// �޸��� STACK������ ����ȴ�.
// �ʱ�ȭ ���� ������ �������� �Ǿ� �ִ�. -> �ǹ� ���� ��
// �Լ��� �Ű������� ���ǵǴ� �Լ��� ���������� ��޵ȴ�.

void local();

void LocalVariable() 
{
	int i = 5;
	int var = 10;
	printf("main()�Լ� �������� ���� ���� var�� ���� : %d\n", var);

	if (i < 10)
	{
		local();
		int var = 30;
		printf("if�� �������� ���� ���� var�� ���� : %d\n", var);
	}
	printf("���� ���� ���� var�� ���� : %d\n", var);
	
}

void local()
{
	int var = 20;
	printf("local()�Լ� �������� ���� ���� var�� ���� : %d\n", var);
}