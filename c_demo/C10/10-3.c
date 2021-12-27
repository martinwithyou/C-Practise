#include<stdio.h>
#include<stdlib.h>

void change(int change[10])
{
	change[0]=5;

}
void main(void)
{
	int read[10]={0};
	change(read);
	printf("%d\n",read[0]);
	system("pause");
}
