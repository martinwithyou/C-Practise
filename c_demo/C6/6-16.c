#include<stdio.h>
#include<stdlib.h>

void main()
{
	char i ; 			//����ѡ�����
	double u=0.7; 		//���������Ļ���Ϊ70%
	double e=0.5;		//����Ӣ���Ļ���Ϊ50%
	double money;		//�����洢�û�������Ļ��ҽ��
	double exchange;	//�����洢����
	//����ʼ
	printf("����������ȥ�Ĺ��ң�����u����������e����Ӣ����");
	scanf("%c",&i);

	//�ж���ȥ�ĸ�����
	if(i=='u')
	{
		exchange=u;
	}
	if(i=='e')
	{
		exchange=e;
	}

	//���û�������Ӧ�Ľ��
	printf("����������һ��Ľ��");
	scanf("%lf",&money);
	//������Եõ���Ӧ���ҵĶ��ٽ��
	printf("����Զһ��õ�%fԪ��ף����;���",money*exchange);
}
