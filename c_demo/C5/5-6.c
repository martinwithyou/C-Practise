#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int a;
	for(a=1;a<11;a++)
	{
		if(a%2==0)
			continue;
		printf("%d\n",a);
 	}
	system("pause");
}
