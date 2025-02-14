#include <stdio.h>	

// 배열(array)
// 배열은 같은 데이터 타입의 변수들로 이루어진 유한집합
// 배열의 구성요소
// 각각의 값을 배열요소(element)
// 위치를 가리키는 숫자 (index)
// 인덱스는 언제나 0부터 시작하며 0을 포함한 양의 정수만 가능하다.
// ** 배열의 모든 요소는 항상 연속된 메모리에 할당된다. **

// 배열의 선언
// int arr[10];

//배열의 크기는 0이 될수 없다
// int arr[0]; -> 불가능하다.

// int size = 100; 배열의 크기는 변수로 지정할 수 없다.
// int arr[size]; -> 불가능하다.

// 단 매크로 상수는 가능하다.
// #define MAX 10
// int arr[MAX];

int add(int a, int b) { return a + b; }
#define ARR_SIZE 5

#define MAX 100

void Array()
{
	//int arr[5] = { 1,2,3 };	// 방의 갯수(크기)가 5인 배열 선언
	//int arr[100] = { 0, };// 100개의 값을 한번에 0으로 초기활때
	int arr[MAX] = { 0, };
	int byteSize = 0;		// 배열의 바이트 크기를 저장할 변수 선언
	int size = 0;			// 배열의 크기를 저장할 변수 선언

	arr[4] = 234;

	byteSize = sizeof(arr);
	printf("배열의 바이트 크기 : %d\n", byteSize);

	size = sizeof(arr) / sizeof(arr[0]);
	printf("배열의 크기 : %d\n", size);

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
		printf("arr배열의 %d번째 요소 값 : %d\n", i + 1, arr[i]);
	}

	int arrr[] = { 1,2,3,4,5,6 };

	for (int i = 0; i < sizeof(arrr) / sizeof(arrr[0]); i++)
	{
		printf("arr배열의 %d번째 요소 값 : %d\n", i + 1, arrr[i]);
	}

	int arr1[ARR_SIZE] = { 0 };

	arr1[0] = 5;
	arr1[1] = arr1[0] + 10;
	arr1[2] = add(arr1[0],arr1[1]);

	printf("정수 2개를 입력하세요 : ");
	scanf_s("%d %d", &arr1[3], &arr1[4]);

	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("arr1배열의 %d번째 요소의 값 : %d\n", i + 1, arr1[i]);
	}
}