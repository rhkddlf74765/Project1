//����ڷκ��� ȭ�� �µ��� �޾Ƽ� ���� �µ��� ȯ���Ͽ� ����ϴ�
//���α׷��� �ۼ��Ͻÿ�.���� �µ��� ȭ�� �µ��� ������ ����
//������ �����Ѵ�.C = (5 / 9)(F - 32)
#include <stdio.h>
int main_22(void)
{
	double f_tempt, c_tempt;
	printf("ȭ�� �µ��� �� �Դϱ�? : ");
	scanf_s("%lf", &f_tempt);
	c_tempt =5.0/9.0 * (f_tempt - 32);
	printf("���� �µ��� %lf �Դϴ�", c_tempt);
	return 0;
}