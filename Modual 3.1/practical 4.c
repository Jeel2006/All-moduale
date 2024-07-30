//interst
#include<stdio.h>
int main()
{
	int p,r,t;
	double si;
	printf("\nEnter the principle amount =");
	scanf("%d",&p);
	printf("\Enter the rate of interst =");
	scanf("%d",&r);
	printf("\nEnter the time of investment =");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("\n the simple interst is = %lf",si);
	
	return 0;
}
