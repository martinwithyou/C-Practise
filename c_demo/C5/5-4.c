#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a;
	int b;
	srand((unsigned) time(NULL));
	a=rand()%100;
	scanf("%d",&b);
	while(a!=b)
	{
	    if(a<b)
	     {
	         printf("输入的数字太大啦\n");
	     } 
	     if(a>b)
	     {
	         printf("输入的数字太小啦\n");
	     } 
	     scanf("%d",&b);
	}
	printf("太棒啦你猜对啦\n");
	system("pause");
}
