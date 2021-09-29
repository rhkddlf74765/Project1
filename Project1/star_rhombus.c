#include <stdio.h>
int main_sdgsgshww(void)
{
	
	//-------------first------total 50 lows---------------------------------------------------------
	int max_space, blank, max_low, low, i, j, string;//max_spce는 가운데줄의 *갯수, blank는 처음 한줄당 빈공간,max_low는 
	//총 길이, low는 현재 줄 string은 줄에 몇번*쓰나..
	printf("제일 긴 줄의 *의 갯수는 ? :");
	scanf_s("%d", &max_space);
	blank = max_space % 2 != 0 ? max_space / 2 : max_space / 2 - 1;
	max_low = blank * 2 + 1;
	low = 0;
	string = max_space - 2 * blank;
	while (low <= max_low)
	{
		if (low < (max_low / 2) + 1)//5-3,7-4,9-5
		{
			for (i = 0; i < blank; i++)
			{
				printf(" ");
			}

			for (j = 0; j < string; j++)
			{
				printf("*");
			}
			printf("\n");
			blank--;
			string += 2;
		}

		else //(low = max_low)
		{
			blank += 2;
			string -= 4;
			for (i = 0; i < blank; i++)
			{
				printf(" ");
			}
			for (j = 0; j < string; j++)
			{
				printf("*");
			}
			printf("\n");
			string += 2;
			blank--;
		}
		low++;
	}
	return 0;
}
