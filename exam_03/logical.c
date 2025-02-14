#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 논리 연산자
int Logical() {

	int month;

	printf("몇 월? \n");
	scanf("%d", &month);

	if (month >= 6 && month <= 8)
	{
		printf("성수기 요금 적용 \n");
	}
	if (month < 6 || month > 8)
	{
		printf("비수기 요금 적용 \n");
	}
	if (!(month <= 1 && month >= 12))
	{
		printf("월을 정확히 입력해주세요.");
	}
	return 0;
}