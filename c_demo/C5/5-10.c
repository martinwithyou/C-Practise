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
	for(i=0;i<x;i++)		//��������˫��ѭ������ÿ�λس�ǰ������һ���Ŀո�
	{
		for(j=0;j<y;j++)		//����һ���Ŀո�
		{
			printf(" ");
		}
		printf("|\n");//�ո������������"|"��Ҳ�����ӵ�
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
