#include<stdio.h>
int addition(num1,num2,ans);
int subtration(num1,num2,ans);
int multiplication(num1,num2,ans);
int division(num1,num2,ans);
int main()
{
	char choice;
	printf("\nPress the '+' for perform addition ");
	printf("\nPress the '-' for perform subtration ");
	printf("\nPress the '*' for perform multiplication");
	printf("\nPress the '/' for perform division ");
	printf("\n Select the choice= ");
	scanf(" %c",&choice);
	
	switch (choice)
	{
		case '+' :
			 addition();
		break;
		
		case '-' :
			 subtration();
		break;
		case '*' :
			multiplication();
		break;
		case '/' :
			division();
		break;
	}
	
}
int addition(num1,num2,ans)
{
	printf("\nEnter the value of num1 =  ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("\nThe answer of %d and %d is %d",num1,num2,ans);
}
int subtration(num1,num2,ans)
{
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nenter the value of num2 = ");
	scanf("%d",&num2);
	ans=num1-num2;
	printf("\nThe answer of %d and %d is %d",num1,num2,ans);
}
int multiplication(num1,num2,ans)
{
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nenter the value of num2 = ");
	scanf("%d",&num2);
	ans=num1*num2;
	printf("\nThe answer of %d and %d is %d",num1,num2,ans);
}
int division( num1,num2,ans)
{
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nenter the value of num2 = ");
	scanf("%d",&num2);
	ans=num1/num2;
	printf("\nThe answer of %d and %d is %d",ans);
}

