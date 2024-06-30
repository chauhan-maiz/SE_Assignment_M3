// Reverse a number using for loop
#include<stdio.h>
main()
{
	int n,i,rem,rev=0,temp;
	printf("\n\n\t Enter a number to reverse: ");
	scanf("%d",&n);
	temp=n;
	
	for(;n>0;)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	
	printf("\n\n\t %d Reversed number is: %d",temp,rev);
}
