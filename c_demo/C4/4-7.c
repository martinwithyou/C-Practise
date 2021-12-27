#include<stdio.h>
#include<stdlib.h>
void main()
{
	int height;
	printf("请输入你的身高（cm）?");
	scanf("%d",&height);
	height=height/10;
	switch(height)
	{
	case 15:printf("多吃点，会长高哦\n");break;
	case 16:printf("还不够高哦\n");break;
	case 17:printf("不错，挺高的了\n");break;
	case 18:printf("你这是男神身高\n");break;
	case 19:printf("你也太高了吧\n");break;
	default:printf("你的身高系统暂时无法判断\n");
	}

	system("pause");
}


