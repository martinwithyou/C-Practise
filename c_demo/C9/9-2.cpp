#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
 int main()
 {
	initgraph(640, 480);   // ������ͼ���ڣ���СΪ 640x480 ����
	circle(200, 200, 100); // ��Բ��Բ��(200, 200)���뾶 100
	int a;
	for(a=0;a<480;a+=50)//������
	{
		line(0,a,640,a);
	}
	for(a=0;a<640;a+=50)//������
	{
		line(a,0,a,480);
	}
	getch();              // �����������
	closegraph();          // �رջ�ͼ����

}
