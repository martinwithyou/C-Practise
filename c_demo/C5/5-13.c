#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>                      //����ͷ�ļ�
void main(void)
{
	int i,j;
	int x=10;
	int y=8;
	char c;
	int k=0;
	int number=5;
	int arm=0;
	int l=0;
	srand((unsigned)time(NULL));

	while(1)
	{
		system("cls");
		if(l==1)              		//����1��ʱ����ĵл���λ��
		{
			number=rand()%10;   	//����һ��0��10���������
			l=0;
		}
		if(arm==0)
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
		if(number==j)
		{
			arm=0;           //����ʼ�ջ���ʾ�л�����������Ϊ0
			l=1;        //���ел���ʱ�򣬸��ĵл�λ��
		}
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
