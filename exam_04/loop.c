#include <stdint.h>

int Loop() {

	int weight = 80;
	int count = 0;

	while (weight > 60)
	{
		printf("빡세게 운동해서 1Kg 빼자 \n");
		weight--;
		count++;
	}
	printf("축하하네 운동 안해도 되네\n");
	printf("%d 일 운동 했다. \n", count);

	int select;

	do {
		printf("빡세게 운동해서 1Kg 빼자 \n");
		weight--;
		count++;
		printf("운동 더 할꺼야?\n");
		printf("1(Yes), 2(No) (숫자를 선택해주세요.)\n");
		scanf("%d", &select);

		if (select == 2) break;
	} while (weight > 50);
	printf("축하하네 운동 안해도 되네\n");
	printf("%d 일 운동 했다. \n", count);

	count = 0;
	for (weight = 80; weight > 50; weight--)
	{
		printf("빡세게 운동 실행\n");
		count++;
	}
	printf("축하,,,운동 그만\n");
	printf("%d일 운동함\n", count);

	// 아래 두개는 무한반복문이다.

	// for(;;)
	// {
	// 
	// }

	// while(1)
	// {
	// 
	// }

	for (int i = 0; i < 5; i++)
	{
		printf("i 시작 %d\n", i);
		for (int j = 0; j < 3; j++)
		{
			printf("j 수행 %d\n", j);
		}
		printf("i 끝 %d\n\n", i);
	}

	return 0;
}