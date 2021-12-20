#include<stdio.h>
void main()
{
	int a,b,choice,ac,rc,bc;
	printf("enter the 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("enter your choice:\n1: Arithmetic\n2: Relational\n3: Bitwise\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter your choice:\n1: + \n2: - \n3: * \n4: / \n5: %%\n");
			scanf("%d",&ac);
	   switch(ac)
	  		{
	   	    case 1:
	   		    printf("%d + %d = %d",a,b,a+b);
	   		    break;
	   	    case 2:
	   		    printf("%d - %d = %d",a,b,a-b);
	   	 	    break;
	   	    case 3:
	   		    printf("%d * %d = %d",a,b,a*b);
	   		    break;
	   	    case 4:
	   		    printf("%d / %d = %d",a,b,a/b);
	   		    break;
	   	    case 5:
	   		    printf("%d % %d = %d",a,b,a%b);
	   		    break;	    
	   		}
	   case 2:
	   	   printf("enter your choice:\n1: >\n2: <\n3: <=\n4: >=\n5: ==\n6: !=\n ");
	   	   scanf("%d",&rc);
	   	   switch(rc)
	   	   {
	   	   	    case 1:
	   	   			printf("%d > %d = %d",a,b,a>b);
	   	   			break;
	   	   		case 2:
	   	   			printf("%d < %d = %d",a,b,a<b);
	   	   			break;
	   	   		case 3:
	   	   			printf("%d <= %d = %d",a,b,a<=b);
	   	   			break;
	   	   		case 4:
	   	   			printf("%d >= %d = %d",a,b,a>=b);
	   	   			break;
				case 5:
	   	   			printf("%d == %d = %d",a,b,a==b);
	   	   			break;
				case 6:
	   	   			printf("%d != %d = %d",a,b,a!=b);		  		  	
			}
		case 3:
		    printf("enter your choice:\n1: &\n2: |\n3: ^");
			scanf("%d",&bc);
			switch(bc)
			{
				case 1:
	   	   			printf("%d & %d = %d",a,b,a&b);
	   	   			break;
	   	   		case 2:
	   	   			printf("%d | %d = %d",a,b,a|b);
	   	   			break;
				case 3:
	   	   			printf("%d ^ %d = %d",a,b,a^b);	  	
			}
	}
}
