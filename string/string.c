#include <stdio.h>

int str_length(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}

	return i;
}

void String()
{
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;

	char not_null = '0';

	printf("NULL의 정수(아스키값) : %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0' 의 정수(아스키값) : %d \n", not_null);

	char sentence_1[5] = { 'G', 'o', 'o', 'd', '\0' };
	char sentence_2[5] = { 'G', 'o', 'o', 'd', 0 };
	char sentence_3[5] = { 'G', 'o', 'o', 'd', NULL };
	char sentence_4[5] = { "Good" };		// 쌍따옴표로 감싸면 자동으로 널문자가 추가된다.
	//char sentence_4[4] = { "Good"};	// 이때 4자릿수 문자여도 4가 아닌 +1을 해준 5로 지정하여 NULL을 넣어줘야 문자열로 된다.(오류난다)
	char sentence_5[5] = "Good";
	char sentence_6[] = "Good";
	char sentence_7[] = "Hello Good";

	printf("sentece_1 : %s \n", sentence_1);
	printf("sentece_2 : %s \n", sentence_2);
	printf("sentece_3 : %s \n", sentence_3);
	printf("sentece_4 : %s \n", sentence_4);
	printf("sentece_5 : %s \n", sentence_5);
	printf("sentece_6 : %s \n", sentence_5);
	printf("sentece_7 : %s \n", sentence_5);

	char word[30] = { "long sentence" };	// 문자가 포함된 열을 제외하고 나머지는 0이 자동으로 대입된다.
	char *pstr = word;

	printf("%s \n", pstr);
	printf("%p \n", pstr);

	for (int i = 0; i < 10; i++)
	{
		//printf("%c \n", pstr[i]);
		//printf("%p \n", pstr++);
		//printf("%c \n", *pstr++);	
		//printf("%c \n", (*pstr)++);
	}

	printf("문자열의 길이는? : %d \n", str_length(pstr));
}