#include<stdio.h>
#include<stdlib.h>
#include<conio.h>//����ͷ�ļ�
void main(void)
{
	int i,j;
	int x=10;
	int y=8;
	char c; 			//�����������
	while(1)
	{
		system("cls");
		for(i=0;i<x;i++)
			printf("\n");
		for(j=0;j<y;j++)
			printf(" ");
	printf("@\n");
	
	c=getch();		//�ɼ��û����������
	if(c=='w')		// �ж��Ƿ�����
		x--;
	if(c=='s')		//�ж��Ƿ�����
		x++;
	if(c=='a')		//�ж��Ƿ�����
		y--;
	if(c=='d')		//�ж��Ƕ�����
		y++;
	}
}
