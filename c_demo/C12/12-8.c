#include<stdio.h>
#include<stdlib.h>
#include<time.h>     	//��������
#include<windows.h> 	//���ƽ���DOS����ȡ����̨����λ�á�����������ɫ��
#include<conio.h>   	//���ܼ������������kbhit()��getch()��
#define SPACE 32
#define LEFT  75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define Wall 2
#define Box 1
#define FACE_Y 29
#define Kong 0
#define FACE_X 20   	//����ߴ�
void gotoxy(int x,int y);  	//�ƶ����
int color(int c);   		//��ɫ
void hidden_cursor();  	//���ع��
void inter_face();  		//��ʼ������
void init_dia();   		//��ʼ��������Ϣ
void draw_dia(int base,int space_c,int x,int y);   	//���Ƿ���
void draw_kong(int base,int space_c,int x,int y); 	//������
int pd(int n,int space_c,int x,int y);  				//�ж��Ƿ񵽵�
void start_game();   	//��ʼ��Ϸ
int xc();				//����
void read_file();   		//��д��߼�¼
void write_file();  		//д��߼�¼
int grade=0;			//��ǰ����
int max=0;				//��߼�¼
int nn=0;
struct Face
{
    int data[FACE_Y][FACE_X+10];    	//��ֵ��Ϊ1�Ƿ��飬Ϊ0�ǿո�
    int color[FACE_Y][FACE_X+10];   	//��Ӧ�������ɫ
}face;
typedef struct Diamonds
{   int space[4][4];        			//4*4����Ϊ1Ϊ���飬Ϊ0 Ϊ��
}Dia;
Dia dia[7][4];  						//һά����7�����飬��ά��ʾ��ת����
int main()
{
    system("cls");                        	//��������
    system("title ����˹����");
    color(7);
    system("mode con cols=60 lines=30");  	//���ڿ�ȸ߶�
    hidden_cursor();
    srand(time(NULL));
    read_file();
    grade=0;
    inter_face();
    init_dia();
    nn=rand()%7;
    while(1)
    {
        start_game();     				//��Ϸ��ʼ�������󣬽�����ѭ��
    }
    return 0;
}
