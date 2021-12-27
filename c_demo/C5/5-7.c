#include<stdio.h>
#include<stdlib.h>
void main(void)
{
    int i,j;				//定义两个循环变量
    int x=10;			//定义画布尺寸 长10宽8
    int y=8;

    for(i=0;i<x;i++)		//输出飞机上面的换行
        printf("\n");
    for(j=0;j<y;j++)		//输出飞机前面的空格
        printf(" ");

    printf("@\n");		//输出飞机
    system("pause");
}
