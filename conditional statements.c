#include<stdio.h>
void main()
{
	int number;
	printf("check the given number is even or odd:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("given number %d is even",number);
	}
	else
	{
		printf("given number %d is odd",number);
	}
	
}
