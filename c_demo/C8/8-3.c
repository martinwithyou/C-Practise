#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int read[10][10]={0};
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d\n",read[i][j]);
		}
  	}
	system("pause");
 }
