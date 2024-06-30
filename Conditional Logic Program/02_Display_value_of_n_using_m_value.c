// display n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0

#include<stdio.h>
main()
{
	int m,n;
	printf("\n\n\t Enter the value of m: ");
	scanf("%d",&m);
	
	if(m==0)
		n=0;
	else if(m>0)
		n=1;
	else
		n=-1;
		
	printf("\n\n\t value of m is: %d",m);
	printf("\n\n\t value of n is: %d",n);
}
