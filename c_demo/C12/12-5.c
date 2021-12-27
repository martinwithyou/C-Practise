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
	struct days
	{
	struct date yeaterday;
	struct date today;
	struct date tomorrow;
	};
	struct days one[2]={           
		{ {2020,04,19}},
	    { {2020,04,20}}
	
	};
	printf("%i.%i.%i",one[1] );

	system("pause");
}
