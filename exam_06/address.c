#include <stdio.h>

int Address()
{
	int i = 5;
	char c = 'A';

	printf("���� i�� �ּҰ� : %p \t ���� i�� �� : %d\n", &i, i);
	printf("���� c�� �ּҰ� : %p \t ���� c�� �� : %c\n", &c, c);

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
		printf("arr�迭�� %d��° �ּҰ� : %p \t arr�迭�� %d��° �� : %d\n", th, &arr[i], th, arr[i]);
	}
}