//사용자로부터 삼각형의 밑변의 길이와 높이를 입력받아서 삼각형의
//넓이를 계산하여 출력하는 프로그램을 작성하시오
#include <stdio.h>
int main_44(void)
{
	double width, height,area;
	char comma;
	comma=',' ;
	printf("삼각형의 밑변의 길이와 높이를 입력하세요 : ");
	printf("콤마의 double형은 %lf 입니다",comma  );
	scanf_s("%lf %lf", &width, &height);
	area = width * height / 2;
	printf("넓이는 %lf", area);
	return 0;
}