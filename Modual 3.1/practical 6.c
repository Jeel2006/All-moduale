#include<stdio.h>
int main()
{
	int day,year;
	printf("\n enter the day =");
	scanf("%d",&day);
	year = day/365;
	printf("\n year is = %d",year);
	printf("\n enter the year = ");
	scanf("%d",&year);
	day=(year*365);
	printf("\n day is = %d",day);
	return 0;
}
