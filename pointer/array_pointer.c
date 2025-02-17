#include <stdio.h>

void apt01();
void apt02();
void apt03();
void apt04();

void ArrayPointer()
{
	apt01();
	printf("\n");
	apt02();
	printf("\n");
	apt03();
	printf("\n");
	apt04();
}

void apt01()
{
	// �迭�� ���� Ȯ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("arr[%d]�� �ּҰ� : %p\n", i, &arr[i]);
	}
}

void apt02()
{
	// �����ͷ� �迭�� ����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *parr;
	parr = &arr[0];

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("arr[%d]�� �ּҰ� : %p | ", i, &arr[i]);
		printf("(parr + %d)�� �ּҰ� : %p ", i, (parr + i));
		if (&arr[i] == (parr + i))
		{
			printf(" ---> ��ġ \n");
		}
		else
		{
			printf(" ---> ����ġ \n");
		}
	}
}

void apt03()
{
	// *�����ڷ� �迭�� ����
	int arr[5] = { 1,2,3,4,5 };
	int *parr;

	parr = &arr[0];

	printf("arr[3] = %d\n *(parr + 3) = %d \n", arr[3], *(parr + 3));
}

void apt04()
{
	// �迭 �̸��� �������� ����
	int arr[3] = { 1,2,3 };

	printf("arr�� ��ü : %p \n", arr);
	printf("arr[0]�� �ּҰ� : %p \n", &arr[0]);
	// �迭�� �̸� arr �� arr[0] �� �ּҰ��� �����ϴ�.
	// �迭�� �̸��� ù��° ���Ҹ� ����Ű�� �����ʹ� �ƴϴ�.

	int *parr = arr;	// �迭���� �ּҰ��� ������ �ֱ⶧���� �̿� ���� �ۼ��� �����ϴ�.

	printf("sizeof(arr) : %d \n", sizeof(arr));
	printf("sizeof(parr) : %d \n", sizeof(parr));

	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", parr[1]);
}