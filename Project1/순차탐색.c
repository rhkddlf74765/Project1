#include<stdio.h>
int main_2415(void)
{
	int want,i;
	int value[7] = { 74,2,1,6,78,9,3 };
	printf("�� ���� ã���ðڽ��ϱ� :");
	scanf_s("%d", &want);
	for (i = 0; i < 7; i++)
	{
		if (want == value[i])
		{
			printf("%d�� %d��° ĭ�� �ֽ��ϴ�", want, i);
		}
	}
	return 0;
}