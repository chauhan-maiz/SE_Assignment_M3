// Wap to calculate a factorial

#include<stdio.h>
main()
{
	int n,i,fact;
	
	printf("\n\n\t Enter a number to find factorial: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n\n\t Factorial of %d is: %d",n,fact);
}
