#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter the value of a =");
	scanf("%d",&a);
	printf("\n Enter the vale of b = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swaping value of a = %d",a);
	printf("\nafter swaping value of b = %d",b);
	return 0;
		
}
