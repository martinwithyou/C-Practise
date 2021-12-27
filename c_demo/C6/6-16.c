#include<stdio.h>
#include<stdlib.h>

void main()
{
	char i ; 			//定义选择变量
	double u=0.7; 		//假设美国的汇率为70%
	double e=0.5;		//假设英国的汇率为50%
	double money;		//用来存储用户的输入的货币金额
	double exchange;	//用来存储汇率
	//程序开始
	printf("请输入你想去的国家（例如u代表美国，e代表英国）");
	scanf("%c",&i);

	//判断是去哪个国家
	if(i=='u')
	{
		exchange=u;
	}
	if(i=='e')
	{
		exchange=e;
	}

	//让用户输入相应的金额
	printf("请输入你想兑换的金额");
	scanf("%lf",&money);
	//计算可以得到相应国家的多少金额
	printf("你可以兑换得到%f元，祝你旅途愉快",money*exchange);
}
