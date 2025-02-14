#include <stdio.h>


// 비트 마스크(bitmask)
// 특정 비트를 조작하기 위한 목적
// AND, OR등의 연산자를 활용하여 이진비트를 처리함
// 메모리사용량이 적음, 프로그램이 빠르게 동작, 소스코드가 직관적

int BitMask() {
	unsigned short data = 0x5678;	// 0b 0101|0110|0111|1000

	unsigned short mask1 = 0xf000;	// 0b 1111|0000|0000|0000
	unsigned short mask2 = 0x0f00;	// 0b 0000|1111|0000|0000
	unsigned short mask3 = 0x00f0;	// 0b 0000|0000|1111|0000
	unsigned short mask4 = 0x000f;	// 0b 0000|0000|0000|1111

	printf("결과1 = %#.4x \n", data & mask1);
	printf("결과2 = %#.4x \n", data & mask2);
	printf("결과3 = %#.4x \n", data & mask3);
	printf("결과3 = %#.4x \n", data & mask4);

	return 0;
}