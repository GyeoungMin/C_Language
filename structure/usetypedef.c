#include <stdio.h>

typedef unsigned int myUnsignedInteger;
typedef char	����Ʈ_1��;
typedef int		����Ʈ_4��;
typedef double  ����Ʈ_8��;

typedef struct food
{
	char name[10];
	int iPrice;
	int iCookTime;
	int iPreference;
}FOOD;

void UseTypedef()
{
	// typedef �� ���� (type define�� ���)
	// ���� ���������� ���� ����
	myUnsignedInteger num;
	num = 10;
	printf("Num : %d \n", num);

	����Ʈ_1�� ���ڿ�[100] = "�ѱ��� ����";
	����Ʈ_4�� ���� = 100;
	����Ʈ_8�� �Ǽ� = 20.55;

	printf("���ڿ� : %s, ���� : %d, �Ǽ� : %.2f\n", ���ڿ�, ����, �Ǽ�);

	FOOD fd = { "���", 3500, 3, 5 };

	printf("�����̸� : %s | ���İ��� : %d | �����ð� : %d | ��ȣ�� : %d", fd.name, fd.iPrice, fd.iCookTime, fd.iPreference);
}