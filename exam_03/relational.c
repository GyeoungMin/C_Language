#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ������
int Relational() {
	int a, b;

	printf("�� ���� ������ �Է��Ͻÿ�.\n");
	scanf("%d %d", &a, &b);

	printf("%d > %d : %d \n", a, b, a > b);
	printf("%d > %d : %d \n", a, b, a < b);
	printf("%d > %d : %d \n", a, b, a >= b);
	printf("%d > %d : %d \n", a, b, a <= b);
	printf("%d > %d : %d \n", a, b, a == b);
	printf("%d > %d : %d \n", a, b, a != b);

	return 0;
}