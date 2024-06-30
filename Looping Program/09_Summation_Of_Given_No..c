// wap to write Summation of given number 

#include<stdio.h>
main()
{
	int n, rem, sum=0;
	printf("\n\n\t Enter a number to find it's Sum: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\n\t Sumation of given number is: %d",sum);
}
