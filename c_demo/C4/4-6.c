#include<stdio.h>
#include<stdlib.h>
void main()
{
	int height,weight,age;					//定义身高，体重，年龄
	printf("请按顺序输入身高（cm），体重（kg），年龄");
	//输入相应的身高，体重，年龄
	scanf("%d%d%d",&height,&weight,&age);		
	
	//10岁以下的情况
	if(age<10){
		printf("年龄太小，系统无法判断");
	}
	//年龄处于10到20之间
	if(age>=10&&age<20){
		if(height>160&&height<180)
		{
			if(weight>40&&weight<60)
			{
				printf("你健康状况良好");
			}
			else
				printf("你健康不好哦");
		}
		else
		printf("你健康不好哦");
	}
	//20至30岁的情况
	if(age>=20&&age<30){
		if(height>160&&height<180)
		{
			if(weight>50&&weight<60)
				printf("你健康状况良好");
			else
					printf("你健康不好哦");
		}
		else
			printf("你健康不好哦");
	}
		//30至40的情况
	if(age>=30&&age<40){
			if(height>160&&height<180)
			{
				if(weight>40&&weight<55)
					printf("你健康状况良好");
				else
				printf("你健康不好哦");
			}
			else
				printf("你健康不好哦");
	}
		//40以上的情况
	if(age>=40){
			printf("年龄太大，系统无法判断");
	}
	system("pause");
}

