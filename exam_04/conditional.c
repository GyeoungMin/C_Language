#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Conditional() {

	int num;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf("%d", &num);

	if (num < 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5���� �۴�.");
	}
	if (num == 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5�� ����.");
	}
	if (num > 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5���� ũ��.");
	}

	if (num < 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5���� �۴�.\n");
	}
	else
	{
		if (num == 5)
		{
			printf("�Է��Ͻ� ���ڴ� 5�� ����.\n");
		}
		else
		{
			printf("�Է��Ͻ� ���ڴ� 5���� ũ��.\n");
		}
	}

	if (num < 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5���� �۴�. \n");
	}
	else if (num == 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5�� ����. \n");
	}
	else
	{
		printf("�Է��Ͻ� ���ڴ� 5���� ũ��. \n");
	}

	return 0;
}