#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	
	if(num > 10 && num % 2 == 0)
	{
		printf("%d(��)�� 10 �ʰ��� ¦���Դϴ�.", num);
	}
	else if(num > 10 && num % 2 == 1)
	{
		printf("%d(��)�� 10 �ʰ��� Ȧ���Դϴ�.", num);
	}
	else if(num <= 10 && num % 2 == 0)
	{
		printf("%d(��)�� 10 ������ ¦���Դϴ�.", num);
	}
	else
	{
		printf("%d(��)�� 10 ������ Ȧ���Դϴ�.", num);
	}
}

