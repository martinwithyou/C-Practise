#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int read[10];			//定义相关变量
	int x=0;
	int i=0;
	int b=2;
	int c=0;
	while(x!=-1)			//采集用户输入的数据
	{
		scanf("%d",&x);
		read[i]=x;
		i++;
	}
	for(i=0;i<=10;i++)		//对数组中的数据进行一一辨别
	{
		if(read[i]==2)
		{
			printf("%d是素数",read[i]);
			continue;
		}
		if(read[i]==1)
		{
			printf("%d不是素数",read[i]);
			continue;
		}
		
		for(b=2;b<read[i];b++)
		{

			if(read[i]%b==0)
				c=1;break;    
					
		}
     	if(c==0)
			printf("%d是素数\n",read[i]);
		else
			 printf("%d不是素数\n",read[i]);
		c=0;
	}

	system("pause");
}
