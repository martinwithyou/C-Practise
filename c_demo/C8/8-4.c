#include<stdio.h>
#include<stdlib.h>

void main(void)
{
int a;
int b;
int read[15][20]={0};		//��������ά���飬��ʼ��Ϊ0
for(a=0;a<20;a++)		//�����±߽縳ֵ
{
	read[0][a]=-1;
	read[14][a]=-1;
}
for(a=0;a<15;a++)		//�����ұ߽縳ֵ
{
	read[a][0]=-1;
	read[a][19]=-1;
}
for(a=0;a<15;a++)		//����������-1����߽�*��0����ո�
{
	for(b=0;b<20;b++)
	{
		if(read[a][b]==-1)
			printf("*");
		if(read[a][b]==0)
			printf(" ");
	}	//ѭ����һ�к�ǵûس�����
	printf("\n");
}
system("pause");
}
