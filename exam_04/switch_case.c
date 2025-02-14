#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	// switch case 문
	// 형식
	// switch(정수식)	// 값이 정수이여야 한다.
	// {
	//	case 정수값1:
	//		문장1;
	//		break;
	//	case 정수값2:
	//		문장2;
	//		break;
	//		.
	//		.
	//		.
	//	default :
	//		break;
	// }

int Switch_Case() {
	int num = 0;

	printf("미세먼지 농도 선택하세요.\n");
	printf("1 : good / 2 : nomal / 3 : bad / 4 : very bad\n");
	scanf("%d", &num);

	switch (num)
	{
	case(1):
	{
		printf("마스크를 벗습니다. \n");
		break;
	}
	case(2):
	{
		printf("마스크를 벗을 수 있습니다. \n");
		break;
	}
	case(3):
	{
		printf("마스크를 벗을수 없습니다. \n");
		break;
	}
	case(4):
	{
		printf("방독면을 씁니다. \n");
		break;
	}
	default:
		printf("잘못된 번호를 입력하였습니다. \n");
		break;
	}
	 
	return 0;
}