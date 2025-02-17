#include <stdio.h>

typedef unsigned int myUnsignedInteger;
typedef char	바이트_1개;
typedef int		바이트_4개;
typedef double  바이트_8개;

typedef struct food
{
	char name[10];
	int iPrice;
	int iCookTime;
	int iPreference;
}FOOD;

void UseTypedef()
{
	// typedef 의 사용법 (type define의 약어)
	// 기존 데이터형에 대한 별명
	myUnsignedInteger num;
	num = 10;
	printf("Num : %d \n", num);

	바이트_1개 문자열[100] = "한글이 좋아";
	바이트_4개 정수 = 100;
	바이트_8개 실수 = 20.55;

	printf("문자열 : %s, 정수 : %d, 실수 : %.2f\n", 문자열, 정수, 실수);

	FOOD fd = { "라면", 3500, 3, 5 };

	printf("음식이름 : %s | 음식가격 : %d | 조리시간 : %d | 선호도 : %d", fd.name, fd.iPrice, fd.iCookTime, fd.iPreference);
}