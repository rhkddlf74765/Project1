//����ڷκ��� �ﰢ���� �غ��� ���̿� ���̸� �Է¹޾Ƽ� �ﰢ����
//���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>
int main_44(void)
{
	double width, height,area;
	char comma;
	comma=',' ;
	printf("�ﰢ���� �غ��� ���̿� ���̸� �Է��ϼ��� : ");
	printf("�޸��� double���� %lf �Դϴ�",comma  );
	scanf_s("%lf %lf", &width, &height);
	area = width * height / 2;
	printf("���̴� %lf", area);
	return 0;
}