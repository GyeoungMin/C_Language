#include <stdio.h>
#include <stdint.h>

// 비트 연산
int Bit()
{
	uint8_t n1 = 15;			// 0b 0000|1111
	uint8_t n2 = 20;			// 0b 0001|0100
	uint8_t result = n1 & n2;	// 0b 0000|0100

	printf("n1 = %d \nn2 = %d \nresult = %d \n", n1, n2, result);

	uint8_t n = 1;		// 0b 0000|0001, (0x01)
	printf("n = %d\n", n);

	uint8_t s1 = n << 1;
	printf("s1 = %d\n", s1);
	uint8_t s2 = n << 2;
	printf("s2 = %d\n", s2);
	uint8_t s3 = n << 3;
	printf("s3 = %d\n", s3);
	uint8_t s4 = n << 4;
	printf("s4 = %d\n", s4);

	return 0;
}