#include<stdio.h>
void main()
{
int	a=15;
int	b=8;
int s=((a+b)+(a-b)+(a*b)+(a/b)+(a%b));
	
	printf("sum of %d and %d is %d\n",a,b,a+b);
	printf("difference of %d and %d is %d\n",a,b,a-b);
	printf("multiplication of %d and %d is %d\n",a,b,a*b);
	printf("quotient when %d is divided with %d is %d\n",a,b,a/b);
	printf("remainder when %d is divided  with %d is %d\n",a,b,a%b);
	printf("sum of all arithmetic operation is %d",s);
}
