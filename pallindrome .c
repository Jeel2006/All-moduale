#include<stdio.h>
int main()
{
	int num,rem,rev;
	printf("\nenter the value of num = ");
	scanf("%d",&num);
	int copy=num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(rev==copy)
	{
		printf("\nThsi is pallindrom number");
	}
	else
	{
		printf("\nThis is not pallindrom number ");
	}
	return 0;
}
