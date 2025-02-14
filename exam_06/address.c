#include <stdio.h>

int Address()
{
	int i = 5;
	char c = 'A';

	printf("변수 i의 주소값 : %p \t 변수 i의 값 : %d\n", &i, i);
	printf("변수 c의 주소값 : %p \t 변수 c의 값 : %c\n", &c, c);

	int arr[4];
	//char arr[4];
	//short arr[4];
	//double arr[4];
	
	arr[0] = 3;
	arr[1] = 5;
	arr[2] = 7;
	arr[3] = 9;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		int th = i + 1;
		printf("arr배열의 %d번째 주소값 : %p \t arr배열의 %d번째 값 : %d\n", th, &arr[i], th, arr[i]);
	}
}