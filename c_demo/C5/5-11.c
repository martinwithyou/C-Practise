#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(void)
{
	int i,j;//
	int x=10;
	int y=8;
	char c;
	int k=0;                  	//�����жϱ�������k=0������س�����k=1������ӵ�
	while(1)
	{
		system("cls");
		if(k==0)          		//��k=0ʱ����س�
		{
		for(i=0;i<x;i++)
			printf("\n");
		}
		if(k==1)        			//��k=1ʱ����ӵ�
		{
			for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
					printf(" ");
			printf("|\n");
			}
			k=0;      			//ÿ��������ӵ��󣬽�k���㣬
		}
	for(j=0;j<y;j++)
		printf(" ");

    printf("@\n");
	
	c=getch();
	if(c=='w')
		x--;
	if(c=='s')
		x++;
	if(c=='a')
		y--;
	if(c=='d')
		y++;
	if(c==' ')       					//���û�����ո�ʱ����k��ֵ������Ϊ1
		k=1;
	}
}
