#include<stdio.h>
int factorial(int);

main()
{
	int n,fact;
	printf("\n\n\t Enter a number to find Factorial: ");
	scanf("%d",&n);
	
	fact=factorial(n);
	printf("\n\n\t factorial of %d is: %d",n,fact);
}

int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n*(factorial(n-1));
}
