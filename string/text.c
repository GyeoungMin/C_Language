#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Text()
{
	char word[30];	// �ִ� 29���� ���ڸ� ���� �� �ִ�.
	printf("%d�� �̸��� ���ڿ��� �Է��Ͻÿ� \n", sizeof(word));
	scanf("%s", word);

	printf("�Է¹��� ���ڿ� : %s", word);
}