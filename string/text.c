#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Text()
{
	char word[30];	// 최대 29개의 문자를 받을 수 있다.
	printf("%d자 미만의 문자열을 입력하시오 \n", sizeof(word));
	scanf("%s", word);

	printf("입력받은 문자열 : %s", word);
}