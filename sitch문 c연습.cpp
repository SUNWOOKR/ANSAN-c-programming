#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("�޴� ���");
			break;
		case 2:
			printf("�߰�");
			break;;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("����");
			break;
		default:
			printf("�ùٸ� ��ȣ�� �Է��ϼ���.");
			break;
	}	
	
	return 0;
}
