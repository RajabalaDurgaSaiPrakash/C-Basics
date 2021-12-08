#include<stdio.h>
void main()
{
	int eng,mat,phy,che,cs,sum;
	float perc;
	printf("enter the marks");
	scanf("%d%d%d%d%d",eng,mat,phy,che,cs);
	sum=eng+mat+phy+che+cs;
	perc=sum*1.0/5;
	if(eng>=28 && mat>=28 && phy>=28 && che>=28 && cs>=28)
	{
		printf("the student is pass\n");
		printf("total marks of the student out of 500 is %d\n",sum);
		printf("percentage of the student is : %l",perc);
		printf("grade: ");
		if(perc>=90)
		{
			printf("the grade is O");
		}
		else if(perc>=80)
		{
			printf("the grade is A");
		}
		else if(perc>=70)
		{
			printf("the grade is B");
		}
		else if(perc>=60);
		{
			printf("the grade is C");
		}
		else if(perc>=50)
		{
			printf("the grade is D");
		}
		else
		{
			printf("the grade is E")
		}
		
	}
	
	else
	{
		printf("student is fail");
	}
}
