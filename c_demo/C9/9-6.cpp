#include <graphics.h>      // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
int main()

   initgraph(436, 600);   				// ������ͼ���ڣ���СΪ 640x480 ����
   circle(200, 200, 100); 				// ��Բ��Բ��(200, 200)���뾶 100
	IMAGE img_back;  
	IMAGE img_air;  
	IMAGE img_airbk;  
	loadimage(&img_back,"D:\\game\\637005952662265167.jpg");	//��������ͼƬ
	loadimage(&img_air,"D:\\game\\637005969616.jpg");		//����ɻ�ͼƬ
	loadimage(&img_airbk,"D:\\game\\637005969676415816.jpg");//����ɻ�����ͼͼƬ
	putimage(0,0,&img_back );				//��ʾ����ͼƬ
	putimage(0,0,&img_airbk,NOTSRCERASE );	//��ʾ�ɻ�����ͼƬ
	putimage(0,0,&img_air,SRCINVERT );		//��ʾ�ɻ�ͼƬ

	getch();              					// �����������
	closegraph();          					// �رջ�ͼ����
}
