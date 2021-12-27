#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	struct date
	{
		int year;
		int month;
		int day;
	};
	struct date days[3]={
		{2020,04,20},
		{2020,04,21},
		{2020,04,22}
	};
	
	printf("%i.%i.%i",days[2] );
	
	system("pause");
}
