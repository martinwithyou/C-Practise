#include<stdio.h>
#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
int hight=504;
int width=1008;

int rwhight=131;
int rwwidth=134;

int holdback[10320][504]={0};//���õ�ͼ�ϵ��ϰ���Ķ�ά����
int red[504][10320];
int gllow[504][10320];
int blue[504][10320];

char i=0;//������������·���
char j=0;//��������������˶���

float v=0;//����µ������ٶ�
float v1=0;//����µ��½��ٶ�

float rw_x,rw_y;
float bj_x;
IMAGE img_rw2,img_gw2;//���屳�����������ͼƬ������ͼ
IMAGE img_bk,img_rw,img_gw;//���屳�����������ͼƬ
IMAGE img_redbj;
void updatewithpeople();//���û������йصĺ���
void updatewithoutpeople();//���û������޹صĺ���
void star();//��ʼ������
void show();//��ʾ����
void gameover();//��Ϸ����

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
	y=(int)rw_y;//����ǿ������ת������Ϊ������int��
if((GetAsyncKeyState(0x41)&0x8000))//�����ƶ�
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
if((GetAsyncKeyState(0x44)&0x8000))//�����ƶ�
{
	if(holdback[x+x1+66][y]==0)
	{
	i=1;
	j=!j;
	rw_x+=0.5;
	if(rw_x>504&&bj_x<10320-1008)//�ƶ����м䣬������ʼ�ƶ�
	{
	rw_x=504;
	bj_x+=0.5;
	}
	}
	
}
if((GetAsyncKeyState(VK_SPACE)&0x8000))
{
	if(holdback[x+x1+33][y+66]==1)//�����������غ󣬲�����Ծ������
	v=300;
}
}


void updatewithoutpeople()//������޹صĺ���
{
	 int x,x1,y;
	x=(int)rw_x;
	x1=(int)bj_x;
	y=(int)rw_y;//����ǿ������ת������Ϊ������int��
	if(v>0)                  //�������������
	{
	rw_y-=1;
		v--;
		if(rw_y==0)//���ﶥ����ֹͣ����
		{
		v=0;
		}
	}
	if(v<=0&&holdback[x+x1+33][y+66]==0)//������½�����
	{
	rw_y+=1;
	if(rw_y>=500)
	{
	gameover();
	}
	}

}
void star()//��ʼ������
{
	int i,j;
	int x=0,y;
initgraph(width, hight);   // ������ͼ���ڣ���СΪ 1008x504 ����
loadimage(&img_bk,_T("C:\\game\\ͼƬ�ز�\\����.jpg"));
loadimage(&img_rw,_T("C:\\game\\ͼƬ�ز�\\�����.jpg"));
loadimage(&img_rw2,_T("C:\\game\\ͼƬ�ز�\\���������ͼ.jpg"));
loadimage(&img_gw,_T("C:\\game\\ͼƬ�ز�\\Ұ��2.jpg"));
loadimage(&img_gw2,_T("C:\\game\\ͼƬ�ز�\\Ұ��2����ͼ.jpg"));
//��ʼ������µ�����
rw_x=33;
rw_y=300;
//��ʼ���ϰ������꣬�ú�����ȡͼƬ�еĺ�ɫ�������꣬�ٽ��и�ֵ
loadimage(&img_redbj,_T("C:\\game\\ͼƬ�ز�\\red����.jpg"));
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
	putimage(0,0,width,hight,&img_bk,bj_x,0);//�������ͼƬ
	if(i==1)
	{
		if(j==0)
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,0,0,NOTSRCERASE);//������ұ��ߵ������
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,0,0,SRCINVERT);
		}
		else
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,rwwidth/2,0,NOTSRCERASE);//��������
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,rwwidth/2,0,SRCINVERT);
		}

		}
	else
	{
		if(j==0)
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,0,rwhight/2,NOTSRCERASE);//��������ߵ������
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,0,rwhight/2,SRCINVERT);
		}
		else
		{
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw2,rwwidth/2,rwhight/2,NOTSRCERASE);//��������
		putimage(rw_x,rw_y,rwwidth/2,rwhight/2,&img_rw,rwwidth/2,rwhight/2,SRCINVERT);
		}
	}
	
	FlushBatchDraw();
}
void gameover()//����������Ϸ
{
     _getch();              // �����������
    closegraph();          // �رջ�ͼ����
	printf("you lose");
	Sleep(4000);
	exit(0);
}
