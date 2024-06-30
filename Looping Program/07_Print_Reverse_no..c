// Wap to print number in reverse order 

#include<stdio.h>
main()
{
	int n,i,rem;
	printf("\n\n\t Enter a number to reverse: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		printf(" %d",rem);
		
		n=n/10;
	}
	
	
}
