#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i;
	int j;
	int max;

	printf("请输入两个不同的整数\n");
	scanf("%d%d",&i,&j);
	if( i>j)
	{
	max=i;
	}
	else
	{
	max=j;
	}
	printf("最大的数字是%d\n",max);
	system("pause");
}
