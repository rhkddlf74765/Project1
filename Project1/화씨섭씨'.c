//사용자로부터 화씨 온도를 받아서 섭씨 온도로 환산하여 출력하는
//프로그램을 작성하시오.섭씨 온도와 화씨 온도는 다음과 같은
//수식을 만족한다.C = (5 / 9)(F - 32)
#include <stdio.h>
int main_22(void)
{
	double f_tempt, c_tempt;
	printf("화씨 온도는 몇 입니까? : ");
	scanf_s("%lf", &f_tempt);
	c_tempt =5.0/9.0 * (f_tempt - 32);
	printf("섭씨 온도는 %lf 입니다", c_tempt);
	return 0;
}