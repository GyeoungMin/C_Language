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
	// 배열의 상태 확인
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("arr[%d]의 주소값 : %p\n", i, &arr[i]);
	}
}

void apt02()
{
	// 포인터로 배열에 접근
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *parr;
	parr = &arr[0];

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("arr[%d]의 주소값 : %p | ", i, &arr[i]);
		printf("(parr + %d)의 주소값 : %p ", i, (parr + i));
		if (&arr[i] == (parr + i))
		{
			printf(" ---> 일치 \n");
		}
		else
		{
			printf(" ---> 불일치 \n");
		}
	}
}

void apt03()
{
	// *연산자로 배열에 접근
	int arr[5] = { 1,2,3,4,5 };
	int *parr;

	parr = &arr[0];

	printf("arr[3] = %d\n *(parr + 3) = %d \n", arr[3], *(parr + 3));
}

void apt04()
{
	// 배열 이름과 포인터의 관계
	int arr[3] = { 1,2,3 };

	printf("arr의 정체 : %p \n", arr);
	printf("arr[0]의 주소값 : %p \n", &arr[0]);
	// 배열의 이름 arr 와 arr[0] 의 주소값이 동일하다.
	// 배열의 이름이 첫번째 원소를 가리키는 포인터는 아니다.

	int *parr = arr;	// 배열명이 주소값을 가지고 있기때문에 이와 같이 작성이 가능하다.

	printf("sizeof(arr) : %d \n", sizeof(arr));
	printf("sizeof(parr) : %d \n", sizeof(parr));

	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", parr[1]);
}