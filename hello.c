#include <stdio.h>
#define APPLE 10
#define NAME "사과"
#define CALC(x, y)	((x)*(y))

int main()
{
	printf("Hello World!!\n\r");
	printf("%s : %d 원입니다.\n", NAME, APPLE);
	printf("%d \n", CALC(5, 10));

	int num = 12345;

	printf("%d\n", num);
	printf("%d\n", num * 10);
	printf("%d\n", num * 100);
	printf("%d\n\n", num * 1000);

	printf("%8d\n", num);
	printf("%8d\n", num * 10);
	printf("%8d\n", num * 100);
	printf("%8d\n\n", num * 1000);

	printf("%08d\n", num);

	return 0;
}