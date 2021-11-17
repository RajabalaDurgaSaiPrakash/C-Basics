#include<stdio.h>
void main()
{
	int x=5, y=2;
	x += y; //x=7,y=2
	x -= y; //x=5,y=2
	x *= y; //x=10,y=2
	x /= y; //x=5,y=2
	x %= y; //x=1,y=2
	y += x; //x=1,y=3
	y -= x; //x=1,y=2
	y *= x; //x=1,y=2
	y /= x; //x=1,y=2
	y %= x; //x=1,y=0
	y += x; //x=1,y=1
	x += y; //x=2,y=1
	y -= x; //x=2,y=-1	
	printf("x = %d\ny = %d",x,y);
}
