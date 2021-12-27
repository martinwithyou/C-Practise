#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int money;				//定义面额
		float all;				//定义总金额
		int number;			//定义投入的数量
		printf("请输入投入的货币类型（一元为1 五角为2 一角为3）");
		scanf("%d",&money);
		printf("请输入投入的货币数量");
		scanf("%d",&number);
		if(money==1)			//计算总金额
			all=1*number;
		if(money==2)
			all=0.5*number;
		if(money==3)
			all=0.1*number;
		if(all>=2)				//判断投入的金额是否大于两元
			printf("祝你旅途愉快");
		else
			printf("对不起，金额不足");
	}
