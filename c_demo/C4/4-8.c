#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int money;				//�������
		float all;				//�����ܽ��
		int number;			//����Ͷ�������
		printf("������Ͷ��Ļ������ͣ�һԪΪ1 ���Ϊ2 һ��Ϊ3��");
		scanf("%d",&money);
		printf("������Ͷ��Ļ�������");
		scanf("%d",&number);
		if(money==1)			//�����ܽ��
			all=1*number;
		if(money==2)
			all=0.5*number;
		if(money==3)
			all=0.1*number;
		if(all>=2)				//�ж�Ͷ��Ľ���Ƿ������Ԫ
			printf("ף����;���");
		else
			printf("�Բ��𣬽���");
	}
