#include <stdio.h>

int main()
{
	for(int i = 0; i < 5; i++)
	{
		// ���� ���ڴ� ù �ٺ��� 4, 3, 2, 1, 0�� ��µž� �մϴ�.
		for(int j= 5; j > i+1; j--)
		{
			printf(" ");
		}
		
		// ���� ù �ٺ��� 1, 3, 5, 7, 9�� ��µž� �մϴ�.
		for(int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}
