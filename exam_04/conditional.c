#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Conditional() {

	int num;
	printf("숫자를 입력하세요.\n");
	scanf("%d", &num);

	if (num < 5)
	{
		printf("입력하신 숫자는 5보다 작다.");
	}
	if (num == 5)
	{
		printf("입력하신 숫자는 5와 같다.");
	}
	if (num > 5)
	{
		printf("입력하신 숫자는 5보다 크다.");
	}

	if (num < 5)
	{
		printf("입력하신 숫자는 5보다 작다.\n");
	}
	else
	{
		if (num == 5)
		{
			printf("입력하신 숫자는 5와 같다.\n");
		}
		else
		{
			printf("입력하신 숫자는 5보다 크다.\n");
		}
	}

	if (num < 5)
	{
		printf("입력하신 숫자는 5보다 작다. \n");
	}
	else if (num == 5)
	{
		printf("입력하신 숫자는 5와 같다. \n");
	}
	else
	{
		printf("입력하신 숫자는 5보다 크다. \n");
	}

	return 0;
}