#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(void)
{
	int i,j;//
	int x=10;
	int y=8;
	char c;
	int k=0;                  	//定义判断变量，当k=0，输出回车，当k=1，输出子弹
	while(1)
	{
		system("cls");
		if(k==0)          		//当k=0时输出回车
		{
		for(i=0;i<x;i++)
			printf("\n");
		}
		if(k==1)        			//当k=1时输出子弹
		{
			for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
					printf(" ");
			printf("|\n");
			}
			k=0;      			//每次输出完子弹后，将k归零，
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
	if(c==' ')       					//当用户输入空格时，将k的值个更改为1
		k=1;
	}
}
