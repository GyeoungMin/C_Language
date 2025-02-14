#include <stdio.h>

// 대입 연산자
int Assignment()
{
	int a = 35, c;

	c = a;
	printf("c = a 는 %d 입니다. \n", c);

	c += a;	// c = c + a;
	printf("c = a 는 %d 입니다. \n", c);

	c -= a;	// c = c - a;
	printf("c = a 는 %d 입니다. \n", c);

	c *= a;	// c = c * a;
	printf("c = a 는 %d 입니다. \n", c);

	c /= a;	// c = c / a;
	printf("c = a 는 %d 입니다. \n", c);

	a <<= 2;	// a = a << 2
	printf("a 는 %d 입니다. \n", a);

	a >>= 2;	// a = a >> 2
	printf("a 는 %d 입니다. \n", a);

	return 0;
}