// Calculate odd and even numbers 

#include<stdio.h>
main()
{
	int n,i,j,e_count=0,o_count=0;
	i=0;
	while(i<5)
	{
		printf("\n\n\t Enter a number: ");
		scanf("%d",&n);
		if(n%2==0)
			e_count++;
		else
			o_count++;
		
		i++;
	}

	printf("\n\n\t Total even Numbers are: %d",e_count);
	printf("\n\n\t Total odd Numbers are: %d",o_count);
}
