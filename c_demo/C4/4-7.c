#include<stdio.h>
#include<stdlib.h>
void main()
{
	int height;
	printf("�����������ߣ�cm��?");
	scanf("%d",&height);
	height=height/10;
	switch(height)
	{
	case 15:printf("��Ե㣬�᳤��Ŷ\n");break;
	case 16:printf("��������Ŷ\n");break;
	case 17:printf("����ͦ�ߵ���\n");break;
	case 18:printf("�������������\n");break;
	case 19:printf("��Ҳ̫���˰�\n");break;
	default:printf("������ϵͳ��ʱ�޷��ж�\n");
	}

	system("pause");
}


