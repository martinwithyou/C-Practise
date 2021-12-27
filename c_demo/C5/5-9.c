#include<stdio.h>
#include<stdlib.h>
#include<conio.h>//引入头文件
void main(void)
{
	int i,j;
	int x=10;
	int y=8;
	char c; 			//定义输入变量
	while(1)
	{
		system("cls");
		for(i=0;i<x;i++)
			printf("\n");
		for(j=0;j<y;j++)
			printf(" ");
	printf("@\n");
	
	c=getch();		//采集用户输入的数据
	if(c=='w')		// 判断是否上移
		x--;
	if(c=='s')		//判断是否下移
		x++;
	if(c=='a')		//判断是否左移
		y--;
	if(c=='d')		//判断是都右移
		y++;
	}
}
