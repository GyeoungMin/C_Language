#include <stdio.h>
#include <string.h>

struct contact
{
	char name[20];			// contact����ü�� member����
	char phoneNumber[20];	// contact����ü�� member����
	int ringtone;			// contact����ü�� member����
};

void Comparison()
{
	struct contact ct1 = { "�輮��" , "01022223333", 0 };
	struct contact ct2 = ct1;

	// ���� ������ �� �Ұ�
	// ex) if(ct1 == c2) �Ұ����ϴ�.

	if (strcmp(ct1.name, ct2.name) == 0
		&& strcmp(ct1.phoneNumber, ct2.phoneNumber) == 0
		&& ct1.ringtone == ct2.ringtone)
	{
		printf("ct1 �� ct2 �� �����ϴ�.\n");
	}
	else
	{
		printf("ct1 �� ct2�� �ٸ��ϴ�. \n");
	}
}