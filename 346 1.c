#include<stdio.h>
void main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("given number %d is positive",n);
	}
	else
	{
		printf("given number %d is negative",n);
	}
}
