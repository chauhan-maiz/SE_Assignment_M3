// Armstrong number using for loop.

#include<stdio.h>
main()
{
	int n,sum=0,temp,rem,i;
	printf("\n\n\t Enter a number to find it's Armstrong: ");
	scanf("%d",&n);
	temp=n;

	for(n>0;)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==temp)
		printf("\n\n\t Number is Armstrong.");
	else
		printf("\n\n\t Number is not Armstrong.");
	
	
}
