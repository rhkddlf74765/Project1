#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main_1sdvsavsdgsdgsgwegweg(void)
{
	char op;
	int x, y, result;
	printf("������ �Է��Ͻÿ�");
	printf("(��: 2 + 5) ");
	printf(">>");
	scanf_s("%d %c %d", &x, &op,1, &y);
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�. ");
		return 0;
	}
	printf("%d %c %d = %d ", x, op, y, result);
	return 0;
}