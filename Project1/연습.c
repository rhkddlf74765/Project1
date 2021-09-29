#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main_1sdvsavsdgsdgsgwegweg(void)
{
	char op;
	int x, y, result;
	printf("수식을 입력하시오");
	printf("(예: 2 + 5) ");
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
		printf("지원되지 않는 연산자입니다. ");
		return 0;
	}
	printf("%d %c %d = %d ", x, op, y, result);
	return 0;
}