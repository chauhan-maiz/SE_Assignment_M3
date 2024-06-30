// Print Multiplication table

#include<stdio.h>
main()
{
	int n,i;
	printf("\n\n\t Enter a number to print Multiplication Table: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d",n,i,n*i);
	}
}
