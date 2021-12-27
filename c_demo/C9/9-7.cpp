#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma comment(lib,"winmm.lib")
#include <graphics.h>
#include <conio.h>

#define width 800
#define high 800

IMAGE img_back;            		//背景图片
IMAGE img_bu;              		//遮挡图片
IMAGE img_lei;             			//左键单击雷的样式
IMAGE img_boom;            		//右键标记雷的样式
IMAGE back; 
IMAGE began;
IMAGE beganback;
int ball[width][high]={0};            		//定义雷的二维数组
int newnumber=0;
int fuck; 

            
void startup()
{ 
		initgraph(width,high);
	//初始化雷的位置?
		int i,j;
		int number=0;
		fuck=0;
		while(number<=10)
		{
				i=rand()%10*80;
				j=rand()%10*80;
			ball[i][j]=1;
			number++;
			}
		number=0;
   loadimage(&img_back,L"C:\\game\\saolei\\636674123704116566.jpg");//导出背景图片
    loadimage(&img_lei,L"C:\\game\\saolei\\636674133611520915.jpg");//导出雷的图片
	loadimage(&img_bu,L"C:\\game\\saolei\\636674414206717137.jpg");//导出游戏胜利图

	loadimage(&img_boom,L"C:\\game\\saolei\\636677853605636622.jpg");
	
    putimage(0,0,&img_back );		//显示胜利图片
	PlaySound(TEXT("C:\\game\\saolei\\OYRH - 光a.wav"),NULL, SND_ASYNC | SND_NODEFAULT);			//播放bgm
 }
void show()
{
	
	BeginBatchDraw();   		//加载画面，防止卡顿?
	
	int x,y;
//划线以区别旗子位置?
  setlinecolor(WHITE);
  for(x=0;x<=800;x+=80)
  {
	  line(x,0,x,800);
  }
  
   for(y=0;y<=800;y+=80)
	  {
	  line(0,y,800,y);
	  }

 FlushBatchDraw();
EndBatchDraw();
}

void updatewithoutinput()
{

}

void updatewithinput()
{  
	int x=0;         	//计数器
	int i,j;         		//扫描器
     MOUSEMSG m;
	while(MouseHit())	//检测是否有鼠标消息
	{
	m=GetMouseMsg();
	if(m.uMsg==WM_MOUSEMOVE){	
	}
	if(m.uMsg==WM_LBUTTONDOWN)
	{
			//先判断是不是雷
	
			if(	ball[m.x/80*80][m.y/80*80]==1)
			{
			 putimage(0,0,&img_lei);
        Sleep(3000);
		exit(0);
			}
		else 
		{
			//左键单击的位置变为随机颜色?
			//COLORREF RGB(100,100,100);
		setfillcolor RGB(rand()%220,rand()%220,rand()%220);
	solidrectangle(m.x/80*80,m.y/80*80,m.x/80*80+80,m.y/80*80+80);
	settextcolor(WHITE);

	//检测周边有多少雷

	if(m.x/80*80==0)
	{
		if(m.y/80*80==0)
				{
				for(i=m.x/80*80;i<=m.x/80*80+80;i+=80)
				for(j=m.y/80*80;j<=m.y/80*80+80;j+=80)
				{
				   if(ball[i][j]==1)
					   x++;
				}
				}
		else 
		{
		for(i=m.x/80*80;i<=m.x/80*80+80;i+=80)
				for(j=m.y/80*80-80;j<m.y/80*80+160;j+=80)
				{
				   if(ball[i][j]==1)
					   x++;
				}
		
		}	
	}
	else
	{
		for(i=m.x/80*80-80;i<m.x/80*80+160;i+=80)
				for(j=m.y/80*80-80;j<m.y/80*80+160;j+=80)
				{
				   if(ball[i][j]==1)
					   x++;
				}
	
	}
	
//输出当前周围有多少雷
	//if(x!=0)
	
	settextcolor(WHITE);
	TCHAR s[5];
    _stprintf(s, _T("%d"), x);
	x=0;
    outtextxy(m.x/80*80+40,m.y/80*80+40, s);
	

	
		}
			
	}
		if(m.uMsg==WM_RBUTTONDOWN)
		{
			fuck++;
		//setfillcolor(BLUE);
	//solidrectangle(m.x/80*80,m.y/80*80,m.x/80*80+80,m.y/80*80+80);
			putimage(m.x/80*80,m.y/80*80,&img_boom);
	if(fuck==10)
	{
	putimage(0,0,&img_bu);
	Sleep(2000);
	exit(0);
	}
	
		}
	}
	
}
void gameover()
{
	  
}
void newshow()
 {
	BeginBatchDraw();   
  putimage(0,0,&back );//显示游戏开始界面
   putimage(250,100,&beganback,NOTSRCERASE ); 
	putimage(250,100,&began,SRCINVERT );
	 FlushBatchDraw();
EndBatchDraw();
 }
 void newupdatewithoutinput()
 {
 
 
 }
 void newupdatewithinput()
 {
    MOUSEMSG m;
	while(MouseHit())//检测鼠标消息
	{
	m=GetMouseMsg();
	if(m.uMsg==WM_MOUSEMOVE){	
	}
	if(m.uMsg==WM_LBUTTONDOWN)
	{
		if(m.x>250&&m.x<450&&m.y>100&&m.y<380)
		{
		newnumber=1;
		}
	}
	}

	
 }
void main()
{
	loadimage(&back,L"C:\\game\\saolei\\636682995766981988.jpg");  //导出开始界面 
	loadimage(&began,L"C:\\game\\saolei\\636682994819374585.jpg");
	loadimage(&beganback,L"C:\\game\\saolei\\636682994819374585back.jpg");
	initgraph(690,431);
	while(newnumber==0)
	{
	 	newshow();
 		newupdatewithoutinput();
 		newupdatewithinput();
	}
	startup();//数据初始化
	while(1)
	{
	
		updatewithoutinput();//与用户无关的变量
  		updatewithinput();//与用户有关的变量
 		show();//画面输出
	
	}
	getch();
	closegraph();
	gameover();
}
