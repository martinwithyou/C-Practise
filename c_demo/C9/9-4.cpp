#include <graphics.h>			// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
int main()
{
	initgraph(436, 600);   		// ������ͼ���ڣ���СΪ 640x480 ����
	circle(200, 200, 100); 		// ��Բ��Բ��(200, 200)���뾶 100
	IMAGE img_back;  
	loadimage(&img_back,"D:\\game\\637005952662265167.jpg");//���뱳��ͼƬ
	putimage(0,0,&img_back );	//��ʾʤ��ͼƬ
	getch();              		// �����������
	closegraph();          		// �رջ�ͼ����
}
