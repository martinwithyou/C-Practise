#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(void)
{
	int read[100];			//定义read数组
	int i=0;
	int  x;
	int a=0;
	scanf("%d",&x);			//初次输入
	while(x!=-1)			//判断输入的是不是-1，-1表示结束
	{
	read[i]=x;				//将x的值付给数组read
	a+=x;				//计算所有数据的总和
	i++;
	scanf("%d",&x);			//重复输入
	}
	
	printf("平均数是%d",a/i);
	system("pause");
}
