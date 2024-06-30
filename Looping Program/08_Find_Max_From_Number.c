// wap to write a program to find a max from given number.

#include<stdio.h>
main()
{
	int n, rem, max;
	printf("\n\n\t Enter a number to find max : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		if(max<rem)
			max=rem;
		n=n/10;
	}
	printf("\n\n\t Max number is: %d",max);
}
