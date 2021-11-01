#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,s;
	a=15;
	b=8;
	c=(a+b);
	d=(a-b);
	e=(a*b);
	f=(a/b);
	g=(a%b);
	s=(c+d+e+f+g);
	printf("sum of %d and %d is %d\n",a,b,c);
	printf("difference of %d and %d is %d\n",a,b,d);
	printf("multiplication of %d and %d is %d\n",a,b,e);
	printf("quotient when %d is divided with %d is %d\n",a,b,f);
	printf("remainder when %d is divided  with %d is %d\n",a,b,g);
	printf("sum of all arithmetic operation is %d",s);
}
