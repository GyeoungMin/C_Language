#include <stdio.h>

// ���� ������
int Assignment()
{
	int a = 35, c;

	c = a;
	printf("c = a �� %d �Դϴ�. \n", c);

	c += a;	// c = c + a;
	printf("c = a �� %d �Դϴ�. \n", c);

	c -= a;	// c = c - a;
	printf("c = a �� %d �Դϴ�. \n", c);

	c *= a;	// c = c * a;
	printf("c = a �� %d �Դϴ�. \n", c);

	c /= a;	// c = c / a;
	printf("c = a �� %d �Դϴ�. \n", c);

	a <<= 2;	// a = a << 2
	printf("a �� %d �Դϴ�. \n", a);

	a >>= 2;	// a = a >> 2
	printf("a �� %d �Դϴ�. \n", a);

	return 0;
}