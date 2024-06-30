// Check Palindrom number using while loop

#include<stdio.h>
main()
{
	int n,temp,rem,rev=0;
	printf("\n\n\t Enter a number to check: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\n\n\t Reversed Number: %d",rev);
	if(temp==rev)
		printf("\n\n\t %d Is a palindrom.",temp);
	else
		printf("\n\n\t %d is not palindrom.",temp);
}
