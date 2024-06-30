// Find 5 numbers Factorial

#include<stdio.h>
main()
{
	int n,i,j,fact;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter a Number to Find Factorial: ");
		scanf("%d",&n);
		fact=1;
		
		for(j=1;j<=n;j++)
		{
			fact=fact*j;
		}
		printf("\n\n\t Factorial of %d is: %d",n,fact);
	}
	
	
}
