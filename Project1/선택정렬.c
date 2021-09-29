#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>



int main_11555252(void)
{
	int min,tmp,i,j,least;
	int right[6] = {3,56,7,1,12,5};
	least = 0;
	for (i = 0; i < 6;i++)
	{
		least=i;
		for ( j = i+1; j < 6; j++)
		{
			if (right[least] > right[j])
			{
				least = j;
			}
		}
		tmp = right[i];
		right[i] = right[least];
		right[least] = tmp;
	}
	for (int i = 0; i < 6; i++)
{
	printf("%5d", right[i]);
}
	
	return 0;
}