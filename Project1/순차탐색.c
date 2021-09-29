#include<stdio.h>
int main_2415(void)
{
	int want,i;
	int value[7] = { 74,2,1,6,78,9,3 };
	printf("몇 번을 찾으시겠습니까 :");
	scanf_s("%d", &want);
	for (i = 0; i < 7; i++)
	{
		if (want == value[i])
		{
			printf("%d은 %d번째 칸에 있습니다", want, i);
		}
	}
	return 0;
}