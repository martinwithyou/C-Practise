#include<stdio.h>
#include<stdlib.h>
#include<time.h>     	//获得随机数
#include<windows.h> 	//控制界面DOS（获取控制台坐标位置、设置字体颜色）
#include<conio.h>   	//接受键盘输入输出（kbhit()、getch()）
#define SPACE 32
#define LEFT  75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define Wall 2
#define Box 1
#define FACE_Y 29
#define Kong 0
#define FACE_X 20   	//界面尺寸
void gotoxy(int x,int y);  	//移动光标
int color(int c);   		//颜色
void hidden_cursor();  	//隐藏光标
void inter_face();  		//初始化界面
void init_dia();   		//初始化方块信息
void draw_dia(int base,int space_c,int x,int y);   	//覆盖方块
void draw_kong(int base,int space_c,int x,int y); 	//画方块
int pd(int n,int space_c,int x,int y);  				//判断是否到底
void start_game();   	//开始游戏
int xc();				//消除
void read_file();   		//读写最高记录
void write_file();  		//写最高纪录
int grade=0;			//当前分数
int max=0;				//最高记录
int nn=0;
struct Face
{
    int data[FACE_Y][FACE_X+10];    	//数值，为1是方块，为0是空格
    int color[FACE_Y][FACE_X+10];   	//对应方块的颜色
}face;
typedef struct Diamonds
{   int space[4][4];        			//4*4矩阵，为1为方块，为0 为空
}Dia;
Dia dia[7][4];  						//一维基础7个方块，二维表示旋转次数
int main()
{
    system("cls");                        	//清屏函数
    system("title 俄罗斯方块");
    color(7);
    system("mode con cols=60 lines=30");  	//窗口宽度高度
    hidden_cursor();
    srand(time(NULL));
    read_file();
    grade=0;
    inter_face();
    init_dia();
    nn=rand()%7;
    while(1)
    {
        start_game();     				//游戏初始化结束后，进入死循环
    }
    return 0;
}
