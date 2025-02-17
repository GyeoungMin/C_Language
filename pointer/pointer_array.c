#include <stdio.h>

void pa01();
void pa02();

void PointerArray() {
	pa01();
	pa02();
}

void pa01()
{
	int *arr[3];
	int a = 1, b = 2, c = 3;
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	printf("a : %d | *arr[0] : %d \n", a, *arr[0]);
	printf("&a : %p | &arr[0] : %p \n", &a, &arr[0]);
	printf("&a : %p | arr[0] : %p \n", &a, arr[0]);

}

void pa02()
{
	// 포인터의 ++, -- 연산
	int arr[5] = { 1,2,3,4,5 };
	int *parr = &arr[0];

	for (int i = 0; i < 3; i++, parr++)
	{
		printf("parr = %p | ", parr);
		printf("parr = %d \n", *parr);
	}
	parr = arr;
	printf("\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("parr = %p | ", parr);
		printf("(*parr)++ = %d \n", (*parr)++);
	}
	
	parr = arr;
	printf("\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("parr = %p | ", parr);
		printf("*parr++ = %d \n", *parr++);
	}
}

