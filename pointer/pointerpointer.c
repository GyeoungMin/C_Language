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
	// 포인터의 포인터
	int a;
	int *pa;
	int **ppa;

	pa = &a;
	ppa = &pa;
	a = 3;

	printf("a의 값 : %d | *pa의 값 : %d | **ppa의 값 : %d \n", a, *pa, **ppa);
	printf("a의 주소 : %p | *pa의 주소 : %p | *ppa의 저장값 : %p \n", &a, pa, *ppa);
	printf("pa의 주소 : %p | ppa의 저장값: %p\n", &pa, ppa);
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

	printf("전체 크기 : %d \n", sizeof(arr));
	printf("총 행의 크기 : %d \n", sizeof(arr[0][0]) + sizeof(arr[1][0]));
	printf("총 열의 크기 : %d \n", sizeof(arr[0]));
	printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));
	printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
}