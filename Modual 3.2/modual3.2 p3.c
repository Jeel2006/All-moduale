#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	(num %2==0) ? printf("\n%d is eiven number",num) : printf("\n %d is odd number ",num);
	
	return 0;
}
