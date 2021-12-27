#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>                      //引入头文件
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
		if(l==1)              		//等于1的时候更改敌机的位置
		{
			number=rand()%10;   	//产生一个0到10的随机整数
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
			arm=0;           //由于始终会显示敌机，所以设置为0
			l=1;        //击中敌机的时候，更改敌机位置
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
