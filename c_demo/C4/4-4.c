#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b;
	printf("请输入你的身高?");
	scanf("%d",&a);
	if(a>170&&a<=175)
	{
		printf("哇 你是男神身高哎\n");
	}
	if(a>175)
	{
		printf("哇 你好高啊?");
	}
	if(a<170)
	{
		printf("多吃东西 可以长高哦");
	}

	system("pause");
}
