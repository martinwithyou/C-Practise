#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(void)
{
	int read[100];			//����read����
	int i=0;
	int  x;
	int a=0;
	scanf("%d",&x);			//��������
	while(x!=-1)			//�ж�������ǲ���-1��-1��ʾ����
	{
	read[i]=x;				//��x��ֵ��������read
	a+=x;				//�����������ݵ��ܺ�
	i++;
	scanf("%d",&x);			//�ظ�����
	}
	
	printf("ƽ������%d",a/i);
	system("pause");
}
