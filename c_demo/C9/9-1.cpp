#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
int main()
{
	initgraph(640, 480);   	// ������ͼ���ڣ���СΪ 640x480 ����
	circle(200, 200, 100);	// ��Բ��Բ��(200, 200)���뾶100
	_getch();              	// �����������
	closegraph();          	// �رջ�ͼ����
}
