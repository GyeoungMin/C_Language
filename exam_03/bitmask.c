#include <stdio.h>


// ��Ʈ ����ũ(bitmask)
// Ư�� ��Ʈ�� �����ϱ� ���� ����
// AND, OR���� �����ڸ� Ȱ���Ͽ� ������Ʈ�� ó����
// �޸𸮻�뷮�� ����, ���α׷��� ������ ����, �ҽ��ڵ尡 ������

int BitMask() {
	unsigned short data = 0x5678;	// 0b 0101|0110|0111|1000

	unsigned short mask1 = 0xf000;	// 0b 1111|0000|0000|0000
	unsigned short mask2 = 0x0f00;	// 0b 0000|1111|0000|0000
	unsigned short mask3 = 0x00f0;	// 0b 0000|0000|1111|0000
	unsigned short mask4 = 0x000f;	// 0b 0000|0000|0000|1111

	printf("���1 = %#.4x \n", data & mask1);
	printf("���2 = %#.4x \n", data & mask2);
	printf("���3 = %#.4x \n", data & mask3);
	printf("���3 = %#.4x \n", data & mask4);

	return 0;
}