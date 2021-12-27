#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(void)
{
	int i,j;//
	int x=10;
	int y=8;
	char c;
	while(1)
	{
		system("cls");
	for(i=0;i<x;i++)		//这里引入双重循环，在每次回车前，输入一定的空格
	{
		for(j=0;j<y;j++)		//输入一定的空格
		{
			printf(" ");
		}
		printf("|\n");//空格输入完后，输入"|"，也就是子弹
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
	}
}
