//사용자로부터 원의 반지름을 입력받아서 원의 둘레와 면적을 계산
//하여 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main_ssgwgwh(void)
{
	//double rad,circum,area; //rad는 반지름 , circum은 원 둘레, area는 원 넓이(면적)
	//printf("원의 반지름은 ? : ");
	//scanf_s("%lf", &rad);
	//circum = 2 * 3.14 * rad;  //원 둘레의 공식
	//area = 3.14 * rad * rad;   //원 면적 공식
	//printf("원의 둘레는 %lf입니다\n", circum);
	//printf("원의 넓이는 %lf입니다\n", area);
	/*char x;
	scanf_s("%c", &x);
	switch (x)
	{
	case 'a':
	case'e':
	case'i':
	case'o':
	case'u':
		printf("모음입니다\n");

	default:
		break;
	}*/
	/*int x, y,tra;
	printf("첫 번째 숫자는?");
	scanf_s("%d", &x);
	printf("두 번째 숫자는?");
	scanf_s("%d", &y);
	tra = x % y;
	if (!tra)
		printf("나누어 떨어짐\n");
	else
		printf("나누어 떨어지지 않음\n");
	printf("몫은 %d 나머지는 %d", x / y, tra);*/
	/*int x, y, z,max,min;
	printf("세 숫자를 입력하시오");
	scanf_s("%d %d %d", &x, &y ,&z);
	max = x > y ? ((x > z) ? x : z) : ((y > z) ? y : z);
	min = x > y ? ((y > z) ? z : y) : ((x < z) ? x : z);
	printf("최댓값은 %d", max);
	printf("최솟값은 %d", min);*/
	/*int age, tall;
	printf("age");
	scanf_s("%d", &age);
	printf("tall");
	scanf_s("%d", &tall);
	if ((age >= 10) && (tall >= 140))
	{
		printf("타도됩니다");
	}
	else
	{
		printf("x");
	}*/
	int max_space, blank,max_low,low,i,j,string;//max_spce는 가운데줄의 *갯수, blank는 처음 한줄당 빈공간,max_low는 
	//총 길이, low는 현재 줄 string은 줄에 몇번*쓰나..
	printf("제일 긴 줄의 *의 갯수는 ? :");
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