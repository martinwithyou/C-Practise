#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int read[10];			//������ر���
	int x=0;
	int i=0;
	int b=2;
	int c=0;
	while(x!=-1)			//�ɼ��û����������
	{
		scanf("%d",&x);
		read[i]=x;
		i++;
	}
	for(i=0;i<=10;i++)		//�������е����ݽ���һһ���
	{
		if(read[i]==2)
		{
			printf("%d������",read[i]);
			continue;
		}
		if(read[i]==1)
		{
			printf("%d��������",read[i]);
			continue;
		}
		
		for(b=2;b<read[i];b++)
		{

			if(read[i]%b==0)
				c=1;break;    
					
		}
     	if(c==0)
			printf("%d������\n",read[i]);
		else
			 printf("%d��������\n",read[i]);
		c=0;
	}

	system("pause");
}
