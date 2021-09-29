#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main_15135512515(void)
{
	int sq[3][5];
	int i, j,sum;
	sum = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			sq[i][j] = rand() % 10;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d", sq[i][j]);
			sum += sq[i][j];
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("배열의 합은 : %d",sum);

	return 0;
}