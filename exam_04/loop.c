#include <stdint.h>

int Loop() {

	int weight = 80;
	int count = 0;

	while (weight > 60)
	{
		printf("������ ��ؼ� 1Kg ���� \n");
		weight--;
		count++;
	}
	printf("�����ϳ� � ���ص� �ǳ�\n");
	printf("%d �� � �ߴ�. \n", count);

	int select;

	do {
		printf("������ ��ؼ� 1Kg ���� \n");
		weight--;
		count++;
		printf("� �� �Ҳ���?\n");
		printf("1(Yes), 2(No) (���ڸ� �������ּ���.)\n");
		scanf("%d", &select);

		if (select == 2) break;
	} while (weight > 50);
	printf("�����ϳ� � ���ص� �ǳ�\n");
	printf("%d �� � �ߴ�. \n", count);

	count = 0;
	for (weight = 80; weight > 50; weight--)
	{
		printf("������ � ����\n");
		count++;
	}
	printf("����,,,� �׸�\n");
	printf("%d�� ���\n", count);

	// �Ʒ� �ΰ��� ���ѹݺ����̴�.

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
		printf("i ���� %d\n", i);
		for (int j = 0; j < 3; j++)
		{
			printf("j ���� %d\n", j);
		}
		printf("i �� %d\n\n", i);
	}

	return 0;
}