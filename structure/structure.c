#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>

// ����ü�� ����
// ���� �ٸ� ���������� �������� �ϳ��� ��� ����ϴ� ���
// ����� ���� ������ ����

typedef struct human		// ���� ���� ������ �� ����
{
	int age;	// ����
	int height;	// Ű
	int weight;	// ������
};				// �׻� ����Ŭ�� ����

struct contact
{
	char name[20];			// contact����ü�� member����
	char phoneNumber[20];	// contact����ü�� member����
	int ringtone;			// contact����ü�� member����
};

void Structure()
{
	struct human info;	// ���� ���� ������ �� Ÿ���� ���� ����
	//struct human info = { 90, 185, 100 }; // �̿Ͱ��� �ʱ�ȭ�� �����ϴ�.
	// �ʱⰪ�� ����� �������� �����ϸ� ������ ������� 0���� �ʱ�ȭ
	// �ʱⰪ���� ����� ������ ������ ����
	// �ʱⰪ�� {0}���� �����ϸ� ��� ����� 0���� �ʱ�ȭ

	info.age = 90;
	info.height = 185;
	info.weight = 100;

	printf("info�� ���� ���� \n");
	printf("���� : %d, Ű : %d, ������ : %d \n", info.age, info.height, info.weight);
	printf("ũ�� : %d, �ּ� : %p, ���1 : %p, ���2 : %p, ���3 : %p\n", sizeof(info), &info, &info.age, &info.height, &info.weight);


	struct contact ct = { "�輮��", "01012345678", 0 };
	struct contact ct1 = { 0 };
	struct contact ct2 = { 0 };

	printf("��    �� : %s \n", ct.name);
	printf("��ȭ��ȣ : %s \n", ct.phoneNumber);
	printf("�� �� �� : %d \n\n", ct.ringtone);

	ct.ringtone = 5;	// ct => ringtone�� 5�� ����
	strcpy(ct.phoneNumber, "01011112222");

	printf("��    �� : %s \n", ct.name);
	printf("��ȭ��ȣ : %s \n", ct.phoneNumber);
	printf("�� �� �� : %d \n\n", ct.ringtone);

	strcpy(ct1.name, "������");
	strcpy(ct1.phoneNumber, "01088889999");
	ct1.ringtone = 2;

	printf("��    �� : %s \n", ct1.name);
	printf("��ȭ��ȣ : %s \n", ct1.phoneNumber);
	printf("�� �� �� : %d \n\n", ct1.ringtone);

	// ����ó�� �Է� �޾� ����.

	printf("��   �� : ");
	scanf("%s", ct2.name);	// name�� �迭�̶� &�Ⱥٿ��� �ȴ�.
	printf("��ȭ��ȣ : ");
	scanf("%s", ct2.phoneNumber);
	printf("�� �� �� : ");
	scanf("%d", &ct2.ringtone);

	printf("��    �� : %s \n", ct2.name);
	printf("��ȭ��ȣ : %s \n", ct2.phoneNumber);
	printf("�� �� �� : %d \n\n", ct2.ringtone);

	// ����ü ������ �ٸ� ����ü ������ �ʱ�ȭ �ϸ�
	// ������ ������� 1:1 �����ؼ� �ʱ�ȭ �Ѵ�.
	struct contact ct3 = ct1;

	printf("��    �� : %s \n", ct3.name);
	printf("��ȭ��ȣ : %s \n", ct3.phoneNumber);
	printf("�� �� �� : %d \n\n", ct3.ringtone);

	// ������
	// ���� ����ü ���� ������ ������ ���� ������ ������� 1:1
	// ct2 = ct; // ct�� ��� ��� -> ct2�� ����
	// ����ü ������ �ʱ�ȭ �Ҷ� ó�� {}�ȿ� ���� ������ �� ����.
	// ex) ct2 = {"�輮��", "01011112222", 4}; --> �ʱ�ȭ �Ҷ��� ��� �����ϴ�
	// �迭�� Ư¡ ������ char�� �迭�� string�� ������ �Ұ����ϴ�.
	// ex) ct2.name = ct1.name; --> �Ұ����ϴ�.
	// ���� char�� �迭�� string�� �����Ϸ��� strcpy�� ����ؾ��Ѵ�.
	// ex) strcpy(ct2.name, ct1.name);
}