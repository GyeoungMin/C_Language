#include <stdio.h>
#include <string.h>

struct contact
{
	char name[20];			// contact구조체의 member변수
	char phoneNumber[20];	// contact구조체의 member변수
	int ringtone;			// contact구조체의 member변수
};

void Comparison()
{
	struct contact ct1 = { "김석진" , "01022223333", 0 };
	struct contact ct2 = ct1;

	// 직접 연산자 비교 불가
	// ex) if(ct1 == c2) 불가능하다.

	if (strcmp(ct1.name, ct2.name) == 0
		&& strcmp(ct1.phoneNumber, ct2.phoneNumber) == 0
		&& ct1.ringtone == ct2.ringtone)
	{
		printf("ct1 과 ct2 가 같습니다.\n");
	}
	else
	{
		printf("ct1 과 ct2가 다릅니다. \n");
	}
}