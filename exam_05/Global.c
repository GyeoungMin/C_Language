#include <stdio.h>

// �������� (Global Variable)
// �Լ��� �ܺο��� ����� �����̴�.
// ���α׷��� ��𿡼��� ������ �����ϴ�.
// ���α׷��� ����Ǿ�� �޸𸮿��� �����ȴ�.
// �޸��� DATA������ ����ȴ�.
// �ʱ�ȭ ���� �ʾƵ� ......0���� �ڵ� �ʱ�ȭ �ȴ�.

int var;

void GlobalVariable()
{
	printf("���� ���� var�� ���� : %d\n", var);
	int i = 5;
	int var = 10;
	printf("main()�Լ� �������� ���� ���� var�� ���� : %d\n", var);

	if (i < 10)
	{
		local();
		printf("if�� �������� ���� var�� ���� : %d\n", var);
	}
	printf("���� ���� ���� var�� ���� : %d\n", var);
}
