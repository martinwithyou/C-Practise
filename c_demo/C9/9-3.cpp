#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma comment(lib,"winmm.lib")
#include <graphics.h>
#include <conio.h>
IMAGE img_back;            	//���ñ���ͼƬ
IMAGE img_air;             		//�ɻ�ͼƬ
IMAGE img_airbk;

#define width 500
#define high 700

int position_x,position_y;			//�ɻ�����
int bull_x,bull_y;        			//�ӵ�����
int enemy_x,enemy_y;      		//��������

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
	if(bull_y>-10)    		//�ӵ�������
	bull_y=bull_y-1;
	if(enemy_y<high)  		//�л�������
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
	while(MouseHit())			//����Ƿ��������Ϣ
	{
	m=GetMouseMsg();
	if(m.uMsg==WM_MOUSEMOVE){
	
		position_x=m.x;			//�ɻ���������������
		position_y=m.y;
	}
	else if(m.uMsg==WM_LBUTTONDOWN)		//���������������ӵ�
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
	startup();							//���ݳ�ʼ��

	while(1)
	{
		show();						//�����ʼ��
		updatewithoutinput();			//���û��޹صı���
		updatewithinput();				//���û��йصı���
 
	}

	getch();
	closegraph();
	gameover();
}
