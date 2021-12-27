#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i;
	int j;
	
	printf("请输入两个不同的整数\n");
	scanf("%d%d",&i,&j);
	max(i,j);
	system("pause");
}
void max(int a,int b)
{
	int max;
	if( a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
    printf("最大的数字是%d\n",max);
}

