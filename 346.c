#include<stdio.h>
void main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you can vote",age);
	}
	else
	{
		printf("you are not allowed to vote",age);
	}
}
