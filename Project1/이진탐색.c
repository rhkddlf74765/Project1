#include<stdio.h>
int main_1262626(void)
{
	int min, max, want, middle,i;
	int value[9] = {1,3,4,6,7,8,14,68,72 };
	printf("� ���ڸ�? :");
	scanf_s("%d", &want);
	min = 0;
	max = 8;
	
	for (i = 0; i < 5; i++)
	{
		middle = (max + min) / 2;
		if (value[middle] < want)
		{
			min = middle+1;
		}
		else if (value[middle] > want)
		{
			max = middle-1;
		}
		else if (value[middle] == want)
		{
			printf("%d��°�� �ֽ��ϴ�", middle + 1);
			break;
		}
	}
	return 0;
}  