#include<stdio.h>
void main()
{
	int p,t;
	float si, r;
	
	p=10000;
	t=2;
	r=7.5;
	si=p*t*r/100;
	
	printf("simple interest of principal amount %d for %d years at a rate of %f interest is %f",p,t,r,si);
}
