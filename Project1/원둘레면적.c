//����ڷκ��� ���� �������� �Է¹޾Ƽ� ���� �ѷ��� ������ ���
//�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>
int main_ssgwgwh(void)
{
	//double rad,circum,area; //rad�� ������ , circum�� �� �ѷ�, area�� �� ����(����)
	//printf("���� �������� ? : ");
	//scanf_s("%lf", &rad);
	//circum = 2 * 3.14 * rad;  //�� �ѷ��� ����
	//area = 3.14 * rad * rad;   //�� ���� ����
	//printf("���� �ѷ��� %lf�Դϴ�\n", circum);
	//printf("���� ���̴� %lf�Դϴ�\n", area);
	/*char x;
	scanf_s("%c", &x);
	switch (x)
	{
	case 'a':
	case'e':
	case'i':
	case'o':
	case'u':
		printf("�����Դϴ�\n");

	default:
		break;
	}*/
	/*int x, y,tra;
	printf("ù ��° ���ڴ�?");
	scanf_s("%d", &x);
	printf("�� ��° ���ڴ�?");
	scanf_s("%d", &y);
	tra = x % y;
	if (!tra)
		printf("������ ������\n");
	else
		printf("������ �������� ����\n");
	printf("���� %d �������� %d", x / y, tra);*/
	/*int x, y, z,max,min;
	printf("�� ���ڸ� �Է��Ͻÿ�");
	scanf_s("%d %d %d", &x, &y ,&z);
	max = x > y ? ((x > z) ? x : z) : ((y > z) ? y : z);
	min = x > y ? ((y > z) ? z : y) : ((x < z) ? x : z);
	printf("�ִ��� %d", max);
	printf("�ּڰ��� %d", min);*/
	/*int age, tall;
	printf("age");
	scanf_s("%d", &age);
	printf("tall");
	scanf_s("%d", &tall);
	if ((age >= 10) && (tall >= 140))
	{
		printf("Ÿ���˴ϴ�");
	}
	else
	{
		printf("x");
	}*/
	int max_space, blank,max_low,low,i,j,string;//max_spce�� ������� *����, blank�� ó�� ���ٴ� �����,max_low�� 
	//�� ����, low�� ���� �� string�� �ٿ� ���*����..
	printf("���� �� ���� *�� ������ ? :");
	scanf_s("%d", &max_space);
	blank = max_space % 2 != 0 ? max_space / 2 : max_space / 2 - 1;
	max_low =blank*2+1;
	low = 0;
	string = max_space-2*blank;
	while (low<=max_low)
	{
		if (low <  (max_low/2)+1)//5-3,7-4,9-5
		{
			for (i = 0;i<blank;i++ )
			{
				printf(" ");
			}
			
			for (j = 0;j<string;j++)
			{
				printf("*");
			}
			printf("\n");
			blank--;
			string += 2;
		}

		else //(low = max_low)
		{
			blank+=2;
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