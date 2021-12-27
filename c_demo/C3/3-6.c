#include<stdio.h>
int main()
{
    int i,j;             //定义两个变量
    double k;          //定义平均数的变量
    scanf("%d %d",&i,&j);
    k=(i+j)/2.0;        //进行平均数的运算
    printf("%d和%d的平均数是%f",i,j,k);
    return 0;
}
