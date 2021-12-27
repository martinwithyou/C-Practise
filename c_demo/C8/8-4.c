#include<stdio.h>
#include<stdlib.h>

void main(void)
{
int a;
int b;
int read[15][20]={0};		//定义界面二维数组，初始化为0
for(a=0;a<20;a++)		//给上下边界赋值
{
	read[0][a]=-1;
	read[14][a]=-1;
}
for(a=0;a<15;a++)		//给左右边界赋值
{
	read[a][0]=-1;
	read[a][19]=-1;
}
for(a=0;a<15;a++)		//遍历函数，-1输出边界*，0输出空格。
{
	for(b=0;b<20;b++)
	{
		if(read[a][b]==-1)
			printf("*");
		if(read[a][b]==0)
			printf(" ");
	}	//循环完一行后记得回车换行
	printf("\n");
}
system("pause");
}
