// Summation of First and Last digits.

#include<stdio.h>
main()
{
	int n,a, rem,sum;
	printf("\n\n\t Enter a number to find sum of first & last digits: ");
	scanf("%d",&n);
	a=n%10;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		
	}
	
	sum=rem+a;
	printf("\n\n\t Summation of First & Last digit: %d",sum);
}
