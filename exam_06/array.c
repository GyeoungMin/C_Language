#include <stdio.h>	

// �迭(array)
// �迭�� ���� ������ Ÿ���� ������� �̷���� ��������
// �迭�� �������
// ������ ���� �迭���(element)
// ��ġ�� ����Ű�� ���� (index)
// �ε����� ������ 0���� �����ϸ� 0�� ������ ���� ������ �����ϴ�.
// ** �迭�� ��� ��Ҵ� �׻� ���ӵ� �޸𸮿� �Ҵ�ȴ�. **

// �迭�� ����
// int arr[10];

//�迭�� ũ��� 0�� �ɼ� ����
// int arr[0]; -> �Ұ����ϴ�.

// int size = 100; �迭�� ũ��� ������ ������ �� ����.
// int arr[size]; -> �Ұ����ϴ�.

// �� ��ũ�� ����� �����ϴ�.
// #define MAX 10
// int arr[MAX];

int add(int a, int b) { return a + b; }
#define ARR_SIZE 5

#define MAX 100

void Array()
{
	//int arr[5] = { 1,2,3 };	// ���� ����(ũ��)�� 5�� �迭 ����
	//int arr[100] = { 0, };// 100���� ���� �ѹ��� 0���� �ʱ�Ȱ��
	int arr[MAX] = { 0, };
	int byteSize = 0;		// �迭�� ����Ʈ ũ�⸦ ������ ���� ����
	int size = 0;			// �迭�� ũ�⸦ ������ ���� ����

	arr[4] = 234;

	byteSize = sizeof(arr);
	printf("�迭�� ����Ʈ ũ�� : %d\n", byteSize);

	size = sizeof(arr) / sizeof(arr[0]);
	printf("�迭�� ũ�� : %d\n", size);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);

	for (int i = 0; i < MAX; i++)
	{
		arr[i] = i;
	}

	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("%d\n", arr[99]);

	arr[0] = 3;
	arr[1] = 4.6;
	arr[2] = 3 / 3;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("arr�迭�� %d��° ��� �� : %d\n", i + 1, arr[i]);
	}

	int arrr[] = { 1,2,3,4,5,6 };

	for (int i = 0; i < sizeof(arrr) / sizeof(arrr[0]); i++)
	{
		printf("arr�迭�� %d��° ��� �� : %d\n", i + 1, arrr[i]);
	}

	int arr1[ARR_SIZE] = { 0 };

	arr1[0] = 5;
	arr1[1] = arr1[0] + 10;
	arr1[2] = add(arr1[0],arr1[1]);

	printf("���� 2���� �Է��ϼ��� : ");
	scanf_s("%d %d", &arr1[3], &arr1[4]);

	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("arr1�迭�� %d��° ����� �� : %d\n", i + 1, arr1[i]);
	}
}