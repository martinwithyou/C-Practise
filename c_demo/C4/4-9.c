#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int money10;		//����1Ԫ���
		int money5;		//����5�����
		int money1;		//����1�����
		float all;			//�����ܽ��
		printf("������Ͷ��Ļ�������������Ϊ1Ԫ 5�� 1��,�м��Կո�ֿ���\n");
		printf("ʾ������1��1ԪӲ�ң�0�����Ӳ�ң�0��1��Ӳ��  \n");
		printf("��׼�����ʽ��1 0 0 \n");

		scanf("%d%d%d",&money10,&money5,&money1);
	    all=1*money10+0.5*money5+0.1*money1;
		if(all>=2)			//�ж�Ͷ��Ľ���Ƿ������Ԫ
			printf("ף����;���");
		else
			printf("�Բ��𣬽���");
	}
