#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i;
	int j;
	int max;

	printf("������������ͬ������\n");
	scanf("%d%d",&i,&j);
	if( i>j)
	{
	max=i;
	}
	else
	{
	max=j;
	}
	printf("����������%d\n",max);
	system("pause");
}
