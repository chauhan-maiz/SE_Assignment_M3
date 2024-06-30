// Wap to print factorial number

#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("\n\n\t Enter a number to find factorial: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n\n\t factorial of %d number is: %d",n,fact);
}
