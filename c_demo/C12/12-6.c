#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	union date
	{
		int year;
		int month;
		int day;
	}today;
	today.year=2020;
	today.month=04;
	today.day=22;
	printf("%d.%d.%d",today.year,today.month,today.day);
	
	system("pause");
}
