#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(void)
{
	int i,j;
	int x=10;
	int y=8;
	char c;
	int k=0;
	int number=5;               //����ɻ�ǰ��Ŀո�
	int arm=0;                  //�жϵл��Ƿ������0����л���1�����
	while(1)
	{
		system("cls");
		if(arm==0)             //�����ж��Ƿ�����л�
		{
			for(i=0;i<number;i++)
				printf(" ");
		     printf("$\n");
		}

		if(k==0)
		{
			for(i=0;i<x;i++)
				printf("\n");
		}
		if(k==1)
		{
			for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
					printf(" ");
			printf("|\n");
		}
		k=0;
		if(number==j)      		//�ж��ӵ��Ƿ���ел�
			arm=1;//
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
	if(c==' ')
		k=1;
	}
}
