#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// ���� ������ (���� ������)
int Conditional() {
	uint8_t a = 1;
	uint8_t b = 0;

	bool ret;
	//uint8_t ret;

	// exp1 ? exp2 : exp 3
	// ���� exp1�� ���̸�,, exp2�� ���� / �׷��������� exp3�� ���� (���׿����� �����̶�� ��������)
	ret = a || b ? 1 : 2;
	printf("%d \n", ret);

	ret = a && b ? 1 : 2;
	printf("%d \n", ret);

	return 0;
}