#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int read[10]={0,1,2,3,4,5,-1};
    int *p=read;
	while(*p!=-1)
	{
		printf("%d\n",*p++);
	
	}
	system("pause");
}
