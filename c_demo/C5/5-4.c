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
	         printf("���������̫����\n");
	     } 
	     if(a>b)
	     {
	         printf("���������̫С��\n");
	     } 
	     scanf("%d",&b);
	}
	printf("̫������¶���\n");
	system("pause");
}
