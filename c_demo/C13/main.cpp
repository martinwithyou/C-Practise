#include<stdio.h>
#include <graphics.h>      // 引用图形库头文件
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
int hight=504;
int width=1008;

int rwhight=131;
int rwwidth=134;

int holdback[10320][504]={0};//设置地图上的障碍物的二维数组
int red[504][10320];
int gllow[504][10320];
int blue[504][10320];

char i=0;//用来定义马里奥方向
char j=0;//用来体现马里奥运动感

float v=0;//马里奥的上升速度
float v1=0;//马里奥的下降速度

float rw_x,rw_y;
float bj_x;
IMAGE img_rw2,img_gw2;//定义背景，人物，怪物图片的遮罩图
IMAGE img_bk,img_rw,img_gw;//定义背景，人物，怪物图片
IMAGE img_redbj;
void updatewithpeople();//与用户输入有关的函数
void updatewithoutpeople();//与用户输入无关的函数
void star();//初始化函数
void show();//显示函数
void gameover();//游戏结束

int main()
{
	star();
    while(1)
	{
	 updatewithpeople();
	 updatewithoutpeople();
	 show();
	}
	return 0;
}
void updatewithpeople()
{
    int x,x1,y;
	x=(int)rw_x;
	x1=(int)bj_x;
	y=(int)rw_y;//进行强制类型转换，因为数组是int型
if((GetAsyncKeyState(0x41)&0x8000))//向左移动
{
	if(holdback[x+x1-1][y]==0)
	{
	i=0;
	j=!j;
	rw_x-=0.5;
	if(rw_x<0&&bj_x>1)
	{
		rw_x=0;
	bj_x-=0.5;
	}
	}

}
if((GetAsyncKeyState(0x44)&0x8000))//向右移动
{
	if(holdback[x+x1+66][y]==0)
	{
	i=1;
	j=!j;
	rw_x+=0.5;
	if(rw_x>504&&bj_x<10320-1008)//移动到中间，背景开始移动
	{
	rw_x=504;
	bj_x+=0.5;
	}
	}
	
}
if((GetAsyncKeyState(VK_SPACE)&0x8000))
{
	if(holdback[x+x1+33][y+66]==1)//满足马里奥落地后，才能跳跃的条件
	v=300;
}
}


void updatewithoutpeople()//与玩家无关的函数
{
	 int x,x1,y;
	x=(int)rw_x;
	x1=(int)bj_x;
	y=(int)rw_y;//进行强制类型转换，因为数组是int型
	if(v>0)                  //马里奥上升控制
	{
	rw_y-=1;
		v--;
		if(rw_y==0)//到达顶部，停止上升
		{
		v=0;
		}
	}
	if(v<=0&&holdback[x+x1+33][y+66]==0)//马里奥下降控制
	{
	rw_y+=1;
	if(rw_y>=500)
	{
	gameover();
	}
	}

}
void star()//初始化函数
{
	int i,j;
	int x=0,y;
initgraph(width, hight);   // 创建绘图窗口，大小为 1008x504 像素
loadimage(&img_bk,_T("C:\\game\\图片素材\\背景.jpg"));
loadimage(&img_rw,_T("C:\\game\\图片素材\\马里奥.jpg"));
loadimage(&img_rw2,_T("C:\\game\\图片素材\\马里奥掩码图.jpg"));
loadimage(&img_gw,_T("C:\\game\\图片素材\\野怪2.jpg"));
loadimage(&img_gw2,_T("C:\\game\\图片素材\\野怪2掩码图.jpg"));
//初始化马里奥的坐标
rw_x=33;
rw_y=300;
//初始化障碍物坐标，用函数提取图片中的红色区域坐标，再进行赋值
loadimage(&img_redbj,_T("C:\\game\\图片素材\\red背景.jpg"));
DWORD*pic;
pic=GetImageBuffer(&img_redbj);
for(i=0;i<504;i++)
	for(j=0;j<10320;j++)
	{
	red[i][j]=GetRValue(pic[x]);
	gllow[i][j]=GetGValue(pic[x]);
	blue[i][j]=GetBValue(pic[x]);
	x++;
	}
for(i=0;i<504;i++)
	for(j=0;j<10320;j++)
	{
	if(red[i][j]==0&&blue[i][j]>=250&&gllow[i][j]==0)
	{
	holdback[j][i]=1;
	}
	}

}
void show()
{
	BeginBatchDraw();
	putimage(0,0,width,hight,&img_bk,bj_x,0);//输出背景图片
	if(i==1)
	{
		if(j==0)
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,0,0,NOTSRCERASE);//输出向右边走的马里奥
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,0,0,SRCINVERT);
		}
		else
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,rwwidth/2,0,NOTSRCERASE);//输出马里奥
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,rwwidth/2,0,SRCINVERT);
		}

		}
	else
	{
		if(j==0)
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,0,rwhight/2,NOTSRCERASE);//输出向左走的马里奥
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,0,rwhight/2,SRCINVERT);
		}
		else
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,rwwidth/2,rwhight/2,NOTSRCERASE);//输出马里奥
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,rwwidth/2,rwhight/2,SRCINVERT);
		}
	}
	
	FlushBatchDraw();
}
void gameover()//结束整个游戏
{
     _getch();              // 按任意键继续
    closegraph();          // 关闭绘图窗口
	printf("you lose");
	Sleep(4000);
	exit(0);
}
