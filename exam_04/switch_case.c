#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	// switch case ��
	// ����
	// switch(������)	// ���� �����̿��� �Ѵ�.
	// {
	//	case ������1:
	//		����1;
	//		break;
	//	case ������2:
	//		����2;
	//		break;
	//		.
	//		.
	//		.
	//	default :
	//		break;
	// }

int Switch_Case() {
	int num = 0;

	printf("�̼����� �� �����ϼ���.\n");
	printf("1 : good / 2 : nomal / 3 : bad / 4 : very bad\n");
	scanf("%d", &num);

	switch (num)
	{
	case(1):
	{
		printf("����ũ�� �����ϴ�. \n");
		break;
	}
	case(2):
	{
		printf("����ũ�� ���� �� �ֽ��ϴ�. \n");
		break;
	}
	case(3):
	{
		printf("����ũ�� ������ �����ϴ�. \n");
		break;
	}
	case(4):
	{
		printf("�浶���� ���ϴ�. \n");
		break;
	}
	default:
		printf("�߸��� ��ȣ�� �Է��Ͽ����ϴ�. \n");
		break;
	}
	 
	return 0;
}