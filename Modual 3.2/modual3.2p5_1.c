#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\n Enter the start value =");
	scanf("%d",&start);
	printf("enter the end value =");
	scanf("%d",&end);
	
	for(i=start;i>=end;i--)
	{
		printf("\n%d",i);
	}
	return 0;
}
