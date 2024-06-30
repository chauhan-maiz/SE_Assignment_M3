//Calculate Compound Interst 

#include<stdio.h>
main()

{
	int Amount,p,r,a,ci,t=4;
	printf("\n\n\t Enter Intial Amount: ");
	scanf("%d",&p);
	printf("\n\n\t Enter the interest rate: ");
	scanf("%d",&r);
	
	a=p*(1+(r%100));
	
	Amount=a*a*a*a;
	printf("\n\n\t Final Amount is: %d",Amount);
	
	ci=Amount-p;
	printf("\n\n\t Compond interest is: %d",ci);
	
	
}
