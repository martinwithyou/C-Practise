#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
     int a;
	 int b=2;
	 int c=0;
	 scanf("%d",&a);
	 for(b=2;b<a;b++)
	 {

	 	if(a%b==0)
	 	{
     		c=1;
	 	break;
	 	}
	 }
	if(c==0)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	system("pause");
}
