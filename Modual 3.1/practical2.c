#include<stdio.h>
int main()
{
	char choice;
	int num1,num2,ans;
	printf("\n press '+' to addition ");
	printf("\n press '-' to subtraction");
	printf("\n press '*' to Multiplication");
	printf("\n press '/' to division");
	prentf("\n Enter the choice =");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case ('+'):
		printf("\n enter the value of  num1 =");
	scanf(" %d",&num1);
	printf("\n enter the value of num2 =");
	scanf(" %d",&num2);
	ans=num1+num2;
	printf("\n The Addition of %d and %d is %d ",num1,num2,ans);
	break;
	case('-'):
		printf("\n enter the value of  num1 =");
	scanf(" %d",&num1);
	printf("\n enter the value of num2 =");
	scanf(" %d",&num2);
	ans=num1-num2;
	printf("\n The Subtraction of %d and %d is %d ",num1,num2,ans);
	break;
	case('*'):
		printf("\n enter the value of  num1 =");
	scanf(" %d",&num1);
	printf("\n enter the value of num2 =");
	scanf(" %d",&num2);
	ans=num1*num2;
	printf("\n The Multiplication of %d and %d is %d ",num1,num2,ans);
	break; 
	case('/'):
		printf("\n enter the value of  num1 =");
	scanf(" %d",&num1);
	printf("\n enter the value of num2 =");
	scanf(" %d",&num2);
	ans=num1/num2;
	printf("\n The Division of %d and %d is %d ",num1,num2,ans);
	break;
	default:printf("\n Invalied input");
	}
	return 0;
}
