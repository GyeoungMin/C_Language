#include <stdio.h>

int b;
// ������
int Pointer()
{
	// int *ptr;	//������ ������ ���� ���
	// ������ Ÿ�� *������ 
	// �������� ũ��� ������ 
	// 32bit ==> 4byte
	// 64bit ==> 8byte

	int n = 567;	// n�� ũ��� 4����Ʈ
	char c = 'a';	// c�� ũ��� 1����Ʈ
	double d = 5.7; // d�� ũ��� 8����Ʈ

	int *pi;
	double *pd;
	char *pc;

	printf("int���� ������ ũ�� : %d \n", sizeof(pi));
	printf("double���� ������ ũ�� : %d \n", sizeof(pd));
	printf("char���� ������ ũ�� : %d \n", sizeof(pc));

	// �������� �ʱ�ȭ
	// ** �����Ϳ� ����� ���� �ּҸ� �����ϸ� �ȵȴ�. **
	// � ������ �ʱ�ȭ ���� �𸣸� 0���� �ʱ�ȭ
	// int *ptr = 0;
	// int *ptr = NULL; //�������

	// & = �ּ� ������
	int a;
	a = 2;

	printf("%p \n", &a);
	printf("%p \n", &b);

	/*int *p;
	p = &a;
	printf("������ p�� ����ִ� �� : %p \n", p);
	printf("���� a�� �ּ� : %p \n", &a);*/

	int *p;
	int *pj;
	int j;

	pj = &j;
	p = &a;
	*p = 3;


	printf("a�� �� : %d \n", a);
	printf("*p�� �� : %d \n", *p);
	printf("pc�� �� : %d \n", *pj);

}