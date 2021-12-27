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
	int number=5;               //定义飞机前面的空格
	int arm=0;                  //判断敌机是否输出，0输出敌机，1不输出
	while(1)
	{
		system("cls");
		if(arm==0)             //现在判断是否输出敌机
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
		if(number==j)      		//判断子弹是否击中敌机
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
