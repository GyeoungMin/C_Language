#include <stdio.h>

int DoubleArray() {
	// int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };	// �̷��� �ۼ��ϸ� �������� �������Ƿ� ���� �ʵ��� �Ѵ�.
	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	printf("%d \t %d \t %d \n", sizeof(arr), sizeof(arr[0]), sizeof(arr[0][0]));				
	printf("%d \t %d \n", sizeof(arr)/sizeof(arr[0]), (sizeof(arr[0]) / sizeof(arr[0][0])));	// ��, �� �� ���ϴ� ���

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf(" %d�� %d�� : %d | ADDRESS : %p \n", i + 1, j + 1, arr[i][j], &arr[i][j]);
		}
	}
}