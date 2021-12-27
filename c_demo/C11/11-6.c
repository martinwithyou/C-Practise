#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void)
{
	char p1[20]="Hello ";
	char p2[]="world";
	strcat(p1,p2);
	printf("%s",p1);
	system("pause");
}
