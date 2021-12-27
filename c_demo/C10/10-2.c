#include<stdio.h>
#include<stdlib.h>

void change(int *p)
{
	*p=10;

}
void main(void)
{
	int a=5;
	change(&a);
	printf("%d\n",a);
	system("pause");
}
