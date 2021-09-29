#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int re_stet(void);////특성과 가중치 중첩되면 계산 
void description(int trait);///마지막에 알려줌
int main_1gss(void)
{
	int start,trait_num[3];
	srand((unsigned)time(NULL));
	printf("시작 =1 입력 \n");
	scanf_s("%d", &start);
	if (start == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			trait_num[i] = re_stet();
		}
		description(trait_num);
		
	}
	return 0;
}
int re_stet(void)
{
	static int i;
	i = -1;
	int num[3];
	num[0] = (rand() % 5) + 1;
	num[1] = num[0] + (rand()%( 5 - num[0])) + 1;
	num[2] = num[0] - (rand() % (5 - num[0])) + 1;
	i++;
	return num[i];
}
void description(int trait[3])////마지막에 기술하는 작업
{
	for (int i = 0; i < 3; i++) {


		switch (trait[i])
		{
		case 1:
		{
			int weight;
			weight = (rand() % 100) + 1;
			printf("str +%d\n", weight);
			break;
		}
		case 2:
		{
			int weight;
			weight = (rand() % 100) + 1;
			printf("int +%d\n", weight);
			break;
		}
		case 3:
		{
			int weight;
			weight = (rand() % 100) + 1;
			printf("luk +%d\n", weight);
			break;
		}
		case 4:
		{
			int weight;
			weight = (rand() % 100) + 1;
			printf("dex +%d\n", weight);
			break;
		}
		case 5:
		{
			int weight;
			weight = 5 * ((rand() % 5) + 1);
			printf("레벨 -%d\n", weight);
			break;
		}
		default:
			break;
		}
	}
}