// Wap to make simple calc

#include<stdio.h>
main()
{
	int a1,a2;
	char c;
	printf("\n\n\t Input Number1: ");
	scanf("%d",&a1);
	printf("\n\n\t Inpur Number2: ");
	scanf("%d",&a2);
	
	printf("\n\n\t ............. Basic Arithmetic ......................");
	printf("\n\n\t ............................................");
	printf("\n\n\t Press + for Addition");
	printf("\n\n\t Press - for Substraction");
	printf("\n\n\t Press * for Multiplication");
	printf("\n\n\t Press / for Division");
	printf("\n\n\t Press e for Exit");
	printf("\n\n\t .............................................");
	
	printf("\n\n\t Input your choise of operation : ");
	scanf("%c",&c);
	
	if(c=='+')
		printf("\n\n\t Addition = %d",a1+a2);
		
	else if(c=='-')
		printf("\n\n\t Substraction = %d",a1-a2);
	else if (c=='*')
		printf("\n\n\t Multiplication = %d",a1*a2);
		
	else if(c=='/')
		printf("\n\n\t Division = %d",a1/a2);
	else if(c=='e')
		exit(0);
		
	else 
		printf("\n\n\t Invalid input...");	
}
