#include<stdio.h>
int main()
{
	int num,rev,rem,i;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	printf("revers number is %d",rev);
	return 0;
}
