#include <stdio.h>

void ppt01();
void ppt02();
void ppt03();

void PointerPointer()
{
	ppt01();
	ppt02();
	ppt03();
}

void ppt01() {
	// �������� ������
	int a;
	int *pa;
	int **ppa;

	pa = &a;
	ppa = &pa;
	a = 3;

	printf("a�� �� : %d | *pa�� �� : %d | **ppa�� �� : %d \n", a, *pa, **ppa);
	printf("a�� �ּ� : %p | *pa�� �ּ� : %p | *ppa�� ���尪 : %p \n", &a, pa, *ppa);
	printf("pa�� �ּ� : %p | ppa�� ���尪: %p\n", &pa, ppa);
}

void ppt02() {
	int arr[2][3];

	printf("arr[0] : %p \n", &arr[0]);
	printf("arr[0][0] : %p \n", &arr[0][0]);

	printf("arr[1] : %p \n", arr[1]);
	printf("arr[1][0] : %p \n", &arr[1][0]);

}

void ppt03() {
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	printf("��ü ũ�� : %d \n", sizeof(arr));
	printf("�� ���� ũ�� : %d \n", sizeof(arr[0][0]) + sizeof(arr[1][0]));
	printf("�� ���� ũ�� : %d \n", sizeof(arr[0]));
	printf("�� ���� ���� : %d \n", sizeof(arr) / sizeof(arr[0]));
	printf("�� ���� ���� : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
}