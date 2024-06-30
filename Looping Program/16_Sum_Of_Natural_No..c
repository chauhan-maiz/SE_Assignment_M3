// Calculae Sum of Natural Numbers

#include<stdio.h>

main()
{
	int n,i,sum=0;
	printf("\n\n\t Enter a positive Number: ");
	scanf("%d",&n);
	
	i=0;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\n\n\t Sum = %d",sum);
}
