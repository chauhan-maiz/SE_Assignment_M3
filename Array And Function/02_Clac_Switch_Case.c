//2.Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include<stdio.h>
main()
{
	int a,b,choice;
	
	printf("Enter Number 1=");
	scanf("%d",&a);
	
	printf("Enter Number 2=");
	scanf("%d",&b);
	
	printf("\n\n\t 1.Addition");
	printf("\n\n\t 2.multiplication");
	printf("\n\n\t 3.subtraction");
	printf("\n\n\t 4.division");
	
	printf("\n\tEnter your Choice=");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	
	case '+':	printf("\n\n\t Addition=%d",a+b);
			break;
		
	case '*':	printf("\n\n\t Multiplication is=%d",a*b);
			break;
		
	case '/':	printf("\n\n\t division is=%d",a/b);
			break;
	case '-':	printf("\n\n\t subtraction is=%d",a-b);
			break;
		
		
	default:	printf("\n\n\t Invalid Choice");
	}
}
