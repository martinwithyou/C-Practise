#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma comment(lib,"winmm.lib")
#include <graphics.h>
#include <conio.h>
IMAGE img_back;            	//设置背景图片
IMAGE img_air;             		//飞机图片
IMAGE img_airbk;

#define width 500
#define high 700

int position_x,position_y;			//飞机坐标
int bull_x,bull_y;        			//子弹坐标
int enemy_x,enemy_y;      		//敌人坐标

void startup(){
	PlaySound(TEXT("C:\\game\\Approaching Nirvana - You.wav"),NULL, SND_ASYNC | SND_NODEFAULT);
	initgraph(width,high);
	loadimage(&img_back,L"C:\\game\\636607142034007829.jpg");
	loadimage(&img_air,L"C:\\game\\air.jpg");
	loadimage(&img_airbk,L"C:\\game\\airbk1.jpg");
	position_x=width/2;
	position_y=high/2;
	bull_x=0;
	bull_y=0;
	enemy_x=width/2;
	enemy_y=0;

	

}

void show()

{
	BeginBatchDraw();
	
	setfillcolor(RED);
	solidcircle(bull_x,bull_y,10);
	setfillcolor(GREEN);
	solidcircle(enemy_x,enemy_y,20);

	
	 FlushBatchDraw();
EndBatchDraw();
}


void updatewithoutinput()
{
	if(bull_y>-10)    		//子弹向上跑
	bull_y=bull_y-1;
	if(enemy_y<high)  		//敌机向下跑
	enemy_y+=1;
	else 
	{
	enemy_x=rand()%width;
	enemy_y=0;
	}
	Sleep(10);
	if(abs(enemy_x-bull_x)+abs(enemy_y-bull_y)<50)
	{
	enemy_x=rand()%width;
	enemy_y=0;
	}
	if(abs(enemy_x-position_x)+abs(enemy_y-position_y)<50)
	{
	     exit(0);
	}
}
void updatewithinput()
{
	MOUSEMSG m;
	while(MouseHit())			//检查是否有鼠标消息
	{
	m=GetMouseMsg();
	if(m.uMsg==WM_MOUSEMOVE){
	
		position_x=m.x;			//飞机坐标等于鼠标坐标
		position_y=m.y;
	}
	else if(m.uMsg==WM_LBUTTONDOWN)		//按下鼠标左键发射子弹
	{
		bull_x=position_x+15;
	    bull_y=position_y-50;
	}

	}

}

void gameover()
{


}

void main()
{
	startup();							//数据初始化

	while(1)
	{
		show();						//画面初始化
		updatewithoutinput();			//与用户无关的变量
		updatewithinput();				//与用户有关的变量
 
	}

	getch();
	closegraph();
	gameover();
}
