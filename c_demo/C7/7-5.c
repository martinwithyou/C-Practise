#include<stdio.h>
#include<stdlib.h>


int max(int a,int b)
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
	return max;

}
void main()
{
	int i;
	int j;
	int m_ax;
	printf("������������ͬ������\n");
	scanf("%d%d",&i,&j);
	m_ax=max(i,j);
	printf("��������%d",m_ax);
	system("pause");
}
