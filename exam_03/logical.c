#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �� ������
int Logical() {

	int month;

	printf("�� ��? \n");
	scanf("%d", &month);

	if (month >= 6 && month <= 8)
	{
		printf("������ ��� ���� \n");
	}
	if (month < 6 || month > 8)
	{
		printf("����� ��� ���� \n");
	}
	if (!(month <= 1 && month >= 12))
	{
		printf("���� ��Ȯ�� �Է����ּ���.");
	}
	return 0;
}