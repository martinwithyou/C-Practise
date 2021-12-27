#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int money10;		//定义1元面额
		int money5;		//定义5角面额
		int money1;		//定义1角面额
		float all;			//定义总金额
		printf("请输入投入的货币数量（依次为1元 5角 1角,中间以空格分开）\n");
		printf("示例输入1个1元硬币，0个五角硬币，0个1角硬币  \n");
		printf("标准输入格式：1 0 0 \n");

		scanf("%d%d%d",&money10,&money5,&money1);
	    all=1*money10+0.5*money5+0.1*money1;
		if(all>=2)			//判断投入的金额是否大于两元
			printf("祝你旅途愉快");
		else
			printf("对不起，金额不足");
	}
