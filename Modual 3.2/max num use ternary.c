#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("\nEnteer the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nEnter the value of num3 = ");
	scanf("%d",&num3);
	
	max=(num1>num2) ? (num1>num3?num1:num3) : (num2>num3)? num2 : num3;
	printf("%d is max",max);
	return 0;	
}
