#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma comment(lib,"winmm.lib")
#include <graphics.h>
#include <conio.h>

#define width 800
#define high 800

IMAGE img_back;            		//����ͼƬ
IMAGE img_bu;              		//�ڵ�ͼƬ
IMAGE img_lei;             			//��������׵���ʽ
IMAGE img_boom;            		//�Ҽ�����׵���ʽ
IMAGE back; 
IMAGE began;
IMAGE beganback;
int ball[width][high]={0};            		//�����׵Ķ�ά����
int newnumber=0;
int fuck; 

            
void startup()
{ 
		initgraph(width,high);
	//��ʼ���׵�λ��?
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
   loadimage(&img_back,L"C:\\game\\saolei\\636674123704116566.jpg");//��������ͼƬ
    loadimage(&img_lei,L"C:\\game\\saolei\\636674133611520915.jpg");//�����׵�ͼƬ
	loadimage(&img_bu,L"C:\\game\\saolei\\636674414206717137.jpg");//������Ϸʤ��ͼ

	loadimage(&img_boom,L"C:\\game\\saolei\\636677853605636622.jpg");
	
    putimage(0,0,&img_back );		//��ʾʤ��ͼƬ
	PlaySound(TEXT("C:\\game\\saolei\\OYRH - ��a.wav"),NULL, SND_ASYNC | SND_NODEFAULT);			//����bgm
 }
void show()
{
	
	BeginBatchDraw();   		//���ػ��棬��ֹ����?
	
	int x,y;
//��������������λ��?
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
	int x=0;         	//������
	int i,j;         		//ɨ����
     MOUSEMSG m;
	while(MouseHit())	//����Ƿ��������Ϣ
	{
	m=GetMouseMsg();
	if(m.uMsg==WM_MOUSEMOVE){	
	}
	if(m.uMsg==WM_LBUTTONDOWN)
	{
			//���ж��ǲ�����
	
			if(	ball[m.x/80*80][m.y/80*80]==1)
			{
			 putimage(0,0,&img_lei);
        Sleep(3000);
		exit(0);
			}
		else 
		{
			//���������λ�ñ�Ϊ�����ɫ?
			//COLORREF RGB(100,100,100);
		setfillcolor RGB(rand()%220,rand()%220,rand()%220);
	solidrectangle(m.x/80*80,m.y/80*80,m.x/80*80+80,m.y/80*80+80);
	settextcolor(WHITE);

	//����ܱ��ж�����

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
	
//�����ǰ��Χ�ж�����
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
  putimage(0,0,&back );//��ʾ��Ϸ��ʼ����
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
	while(MouseHit())//��������Ϣ
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
	loadimage(&back,L"C:\\game\\saolei\\636682995766981988.jpg");  //������ʼ���� 
	loadimage(&began,L"C:\\game\\saolei\\636682994819374585.jpg");
	loadimage(&beganback,L"C:\\game\\saolei\\636682994819374585back.jpg");
	initgraph(690,431);
	while(newnumber==0)
	{
	 	newshow();
 		newupdatewithoutinput();
 		newupdatewithinput();
	}
	startup();//���ݳ�ʼ��
	while(1)
	{
	
		updatewithoutinput();//���û��޹صı���
  		updatewithinput();//���û��йصı���
 		show();//�������
	
	}
	getch();
	closegraph();
	gameover();
}
