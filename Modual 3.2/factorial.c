//factorial
#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\nfcatorial of %d is %d",num,fact);
	return 0;
}
