#include <graphics.h>     		 // 引用图形库头文件
#include <conio.h>
int main()
{
   initgraph(436, 600);   		// 创建绘图窗口，大小为 640x480 像素
   circle(200, 200, 100);	 		// 画圆，圆心(200, 200)，半径 100
	IMAGE img_back;  
	IMAGE img_air;  
	loadimage(&img_back,"D:\\game\\637005952662265167.jpg");		//导出背景图片
	loadimage(&img_air,"D:\\game\\637005969676415816.jpg");		//导入飞机图片
	putimage(0,0,&img_back );	//显示背景图片
	putimage(0,0,&img_air );		//显示飞机图片
	getch();              		// 按任意键继续
	closegraph();          		// 关闭绘图窗口
}

