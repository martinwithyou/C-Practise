#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int read[10]={0,1,2,3,4,5};
	int *p=read;
	p++;
	printf("%d\n",p);
	printf("%d\n",&read[1]);
	system("pause");
}
