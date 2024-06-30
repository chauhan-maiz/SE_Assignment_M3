// Calculate Compound Interest

#include<stdio.h>
main()

{
	int p,r,A,b,a;
	//t=4;
	printf("\n\n\t Enter initial amount: ");
	scanf("%d",&p);
	printf("\n\n\t Enter interest rate : ");
	scanf("%d",&r);
	a=(r%100);
	b=p*(1+a);
	A=b*b;
	printf("Compound Interest is: %d",A);
}
