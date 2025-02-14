#include <stdio.h>

int DoubleArray() {
	// int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };	// 이렇게 작성하면 가독성이 떨어지므로 하지 않도록 한다.
	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	printf("%d \t %d \t %d \n", sizeof(arr), sizeof(arr[0]), sizeof(arr[0][0]));				
	printf("%d \t %d \n", sizeof(arr)/sizeof(arr[0]), (sizeof(arr[0]) / sizeof(arr[0][0])));	// 행, 열 수 구하는 방법

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
		{
			printf(" %d행 %d열 : %d | ADDRESS : %p \n", i + 1, j + 1, arr[i][j], &arr[i][j]);
		}
	}
}