#include <stdio.h>

// ��������� ����
int Arithmetic() {

	int a = 39, b = 17, result;

	result = a + b;
	printf("a + b = %d \n", result);

	result = a - b;
	printf("a - b = %d \n", result);

	result = a * b;
	printf("a * b = %d \n", result);

	result = a / b;
	printf("a / b = %d \n", result);

	result = a % b;	//������
	printf("a %% b = %d \n", result);

	return 0;
}