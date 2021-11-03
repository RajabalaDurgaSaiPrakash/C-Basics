//c program that converts minutes into hours and minutes
#include<stdio.h>
void main()
{
	int a;
	int b;
	a = 550;
    b = a/60;
    int c = a%60;
    printf("%d minutes is equals to %d hour(s) and %d minute(s)",a,b,c);
    
}
