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
	struct date today;
	today.year=2020;
	today.month=04;
	today.day=20;
	printf("%i.%i.%i",today.year,today.month,today.day);
	
	system("pause");
}
