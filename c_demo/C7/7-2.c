#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i;
	int j;
	
	printf("������������ͬ������\n");
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
    printf("����������%d\n",max);
}

