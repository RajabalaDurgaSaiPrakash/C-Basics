#include<stdio.h>
void main()
{
	int n,r,reverse=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
	printf("%d",reverse);
}
