#include<stdio.h>
void main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
			printf("%d is even number",a);
			break;
		case 1:
			printf("%d is odd",a);
			break;
		default:
			printf("this is invalid",a);
	}
}
