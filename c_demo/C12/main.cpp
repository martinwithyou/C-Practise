#include<stdio.h>
#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include<time.h>
int hight = 800;//���廭��ߴ�
int width = 800;  

int cube_x,cube_y;//���巽�������

int kind;//���巽�������

int v=0;//���巽��������ٶ�

int a; //���������ٶ�

int bottom_y;//����ÿ������ĵײ�
int bottom_x[4];//����ÿ������ĵײ�

int view[800][800] = {0};//������������Ķ�ά����
void updatewithpeople();//���û������йصĺ���
void updatewithoutpeople();//���û������޹صĺ���
void star();//��ʼ������
void show();//��ʾ����
void gameover();//��Ϸ����
void search();

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
void updatewithpeople()//���û������йصĺ���
{
	
if(GetAsyncKeyState(0x41)&0x8000)//�����ƶ�
{
	Sleep(10);
	if(GetAsyncKeyState(0x41)&0x8000)//��������
	{
	if(cube_x>=0)
	{
	cube_x-=40;
		switch(kind)//����ұߵķ���
		{
		case 0:view[cube_x+80][cube_y]=0;view[cube_x+80][cube_y+40]=0;break;
		case 1:view[cube_x+80][cube_y]=0;view[cube_x+80][cube_y+40]=0;break;
		case 2:view[cube_x+80][cube_y]=0;view[cube_x+120][cube_y+40]=0;break;
		case 3:view[cube_x+80][cube_y]=0;view[cube_x+40][cube_y+40]=0;break;
		case 4:view[cube_x+160][cube_y]=0;break;
		case 5:view[cube_x+40][cube_y]=0;view[cube_x+120][cube_y+40]=0;break;
		case 6:view[cube_x+40][cube_y]=0;view[cube_x+40][cube_y+40]=0;break;
		case 7:view[cube_x+40][cube_y]=0;view[cube_x+80][cube_y+40]=0;break;
		}
	}
	}
   while(GetAsyncKeyState(0x41)&0x8000);
}
if(GetAsyncKeyState(0x44)&0x8000)//�����ƶ�
{
	Sleep(10);
	if(GetAsyncKeyState(0x44)&0x8000)
	{
	if(cube_x<=800)
	{
	cube_x+=40;
			switch(kind)//�����ߵķ���
		{
		case 0:view[cube_x-40][cube_y]=0;view[cube_x-40][cube_y+40]=0;break;
		case 1:view[cube_x-40][cube_y]=0;view[cube_x-40][cube_y+40]=0;break;
		case 2:view[cube_x-40][cube_y]=0;view[cube_x][cube_y+40]=0;break;
		case 3:view[cube_x-40][cube_y]=0;view[cube_x-80][cube_y+40]=0;break;
		case 4:view[cube_x-40][cube_y]=0;break;
		case 5:view[cube_x-40][cube_y]=0;view[cube_x-40][cube_y+40]=0;break;
		case 6:view[cube_x-40][cube_y]=0;view[cube_x-120][cube_y+40]=0;break;
		case 7:view[cube_x-40][cube_y]=0;view[cube_x-80][cube_y+40]=0;break;
		}
	}
	}
	while(GetAsyncKeyState(0x44)&0x8000);
}
if(GetAsyncKeyState(VK_SPACE)&0x8000)
{
Sleep(10);
	if(GetAsyncKeyState(VK_SPACE)&0x8000)//�ո�� ������ת
	{
		switch(kind)
		{
		case 0:break;
		case 1:break;
		case 2:break;
		case 3:break;
		case 4:break;
		case 5:break;
		case 6:break;
		case 7:break;
		}
	}
	while(GetAsyncKeyState(VK_SPACE)&0x8000);
}
}
void updatewithoutpeople()//���û������޹صĺ���
{
	int j,k;
	int x,y;
	srand(time(NULL));
	if(v==0)
	{
		cube_x=400;
		cube_y=0;
	 kind=rand()%7; //�������һ�ַ���
	 v=1;//��v=0��ʱ��������ˢ����һ�ַ���
	}

	if(kind==4)
		bottom_y=cube_y;
	else
		bottom_y=cube_y+40;
	switch(kind)//ʵ����һ�����������
	{
		case 0:
		view[cube_x][cube_y]=0;
		view[cube_x+40][cube_y]=0;
		view[cube_x][cube_y+40]=0;
		view[cube_x+40][cube_y+40]=0;break;
	case 1:
		view[cube_x][cube_y]=0;
		view[cube_x+40][cube_y]=0;
		view[cube_x][cube_y+40]=0;
		view[cube_x+40][cube_y+40]=0;break;
	case 2:
		view[cube_x][cube_y]=0;
		view[cube_x+40][cube_y]=0;
		view[cube_x+40][cube_y+40]=0;
		view[cube_x+80][cube_y+40]=0;break;
	case 3:
		view[cube_x][cube_y]=0;
		view[cube_x+40][cube_y]=0;
		view[cube_x][cube_y+40]=0;
		view[cube_x-40][cube_y+40]=0;break;
	case 4:
		view[cube_x][cube_y]=0;
		view[cube_x+40][cube_y]=0;
		view[cube_x+80][cube_y]=0;
		view[cube_x+120][cube_y]=0;break;
	case 5:
		view[cube_x][cube_y]=0;
		view[cube_x][cube_y+40]=0;
		view[cube_x+40][cube_y+40]=0;
		view[cube_x+80][cube_y+40]=0;break;
	case 6:
		view[cube_x][cube_y]=0;
		view[cube_x][cube_y+40]=0;
		view[cube_x-40][cube_y+40]=0;
		view[cube_x-80][cube_y+40]=0;break;
	case 7:
	view[cube_x][cube_y]=0;
	view[cube_x][cube_y+40]=0;
	view[cube_x-40][cube_y+40]=0;
	view[cube_x+40][cube_y+40]=0;break;
	}

	switch(kind)//�����жϸ��ַ����Ƿ�Ӧ������
	{
	case 0:
		if(view[cube_x][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
			case 1:
		if(view[cube_x][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
			case 2:
		if(view[cube_x+40][bottom_y+40]!=1&&view[cube_x+80][bottom_y+40]!=1&& bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
			case 3:
		if(view[cube_x][bottom_y+40]!=1&&view[cube_x-40][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
			case 4:
		if(view[cube_x][bottom_y+40]!=1&&view[cube_x+40][bottom_y+40]!=1&&view[cube_x+80][bottom_y+40]!=1&&view[cube_x+120][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>200)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
		case 5:
		if(view[cube_x][bottom_y+40]!=1&&view[cube_x+40][bottom_y+40]!=1&&view[cube_x+80][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
			case 6:
		if(view[cube_x][bottom_y+40]!=1&&view[cube_x-40][bottom_y+40]!=1&&view[cube_x-80][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
			case 7:
		if(view[cube_x][bottom_y+40]!=1&&view[cube_x+40][bottom_y+40]!=1&&view[cube_x-40][bottom_y+40]!=1&&bottom_y<760)
		{
					 a++;
			 if(a>400)
			 {
			 cube_y+=40;
			 a=0;
			 }	 
		}
		else 
			v=0;search();break;
	}
switch(kind)//ʵ�ָ��ַ���Ļ���
	{
		case 0:
		view[cube_x][cube_y]=1;
		view[cube_x+40][cube_y]=1;
		view[cube_x][cube_y+40]=1;
		view[cube_x+40][cube_y+40]=1;break;
	case 1:
		view[cube_x][cube_y]=1;
		view[cube_x+40][cube_y]=1;
		view[cube_x][cube_y+40]=1;
		view[cube_x+40][cube_y+40]=1;break;
	case 2:
		view[cube_x][cube_y]=1;
		view[cube_x+40][cube_y]=1;
		view[cube_x+40][cube_y+40]=1;
		view[cube_x+80][cube_y+40]=1;break;
	case 3:
		view[cube_x][cube_y]=1;
		view[cube_x+40][cube_y]=1;
		view[cube_x][cube_y+40]=1;
		view[cube_x-40][cube_y+40]=1;break;
	case 4:
		view[cube_x][cube_y]=1;
		view[cube_x+40][cube_y]=1;
		view[cube_x+80][cube_y]=1;
		view[cube_x+120][cube_y]=1;break;
	case 5:
		view[cube_x][cube_y]=1;
		view[cube_x][cube_y+40]=1;
		view[cube_x+40][cube_y+40]=1;
		view[cube_x+80][cube_y+40]=1;break;
	case 6:
		view[cube_x][cube_y]=1;
		view[cube_x][cube_y+40]=1;
		view[cube_x-40][cube_y+40]=1;
		view[cube_x-80][cube_y+40]=1;break;
	case 7:
	view[cube_x][cube_y]=1;
	view[cube_x][cube_y+40]=1;
	view[cube_x-40][cube_y+40]=1;
	view[cube_x+40][cube_y+40]=1;break;
	}

//�ж��Ƿ�����һ��


}
void star()//��ʼ������
{
 cube_x=400;//���巽��ĳ�ʼλ��
 cube_y=0;
 view[cube_x][cube_y]=1;
 initgraph(hight, width);//����800*800������
}
void show()//��ʾ����
{
	srand(time(NULL));
	BeginBatchDraw();
	int x,y;
	cleardevice();
	 for(x=0;x<800;x+=40)//������˹�������������
	 {
	 line(x,0,x,800);
	 }
	 for(y=0;y<800;y+=40)
	 {
	 line(0,y,800,y);
	 }
	 setlinecolor(RGB(255,255,255));
	 if(v==0)
	 {
	 setfillcolor(RGB(rand()%255,rand()%255,rand()%255));//���������ɫ�ķ��飻
	 }
	for(x=0;x<800;x+=40)
		for(y=0;y<800;y+=40)
		{
		if(view[x][y]==1||view[x][y]==2)
			fillrectangle(x,y,x+40,y+40);
		}
FlushBatchDraw();	
}
void gameover()//��Ϸ����
{}
void search()//��һ�У�������ͬʱ��һ��ȫ������
{
	int x,y,j;
	int number=0;
	for(y=0;y<800;y+=40)
{
for(x=0;x<800;x+=40)
	{
		if(view[x][y]==1)
		{
		number++;
		}
	}
if(number==20)
{
	j=0;
	while(j<=760)
	{
	view[j][y]=0;
	j+=40;
	}
	j=y-40;
	for(;j>=0;j-=40)
		for(x=0;x<800;x+=40)
		{
		if(view[x][j]==1)
		{
		view[x][j]=0;
		view[x][j+40]=1;
		}
		}

}
number=0;
}
	

}
