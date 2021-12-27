#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a;
	printf("请输入你的身高");
	scanf("%d",&a);
	if(a>=170)
	{
		printf("哇 你好高啊\n");
	}
	else
	{
		printf("多吃一点 会长高的\n");
	}
	system("pause");
}
