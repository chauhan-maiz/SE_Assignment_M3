// input 10 no. from user and find even/odd numbers and their sum

#include<stdio.h>
main()
{
	int i,n=10,e_count=0,o_count=0,even_sum=0,odd_sum=0;
	
	printf("\n\n\t--------------Even Numbers::-------------------------\n\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			e_count++;
			even_sum=even_sum+i;
			printf(" %d",i);
		}	
	}
	printf("\n\n\t--------------Odd Numbers::-------------------------\n\n");
	for(i=1;i<=10;i++)
	{
		if(i%2!=0)
		{
			o_count++;
			odd_sum+=i;
			printf(" %d",i);
		}
	}
	
	printf("\n\n\t Total count of even numbers : %d",e_count);
	printf("\n\n\t Total count of odd numbers : %d",o_count);
	printf("\n\n\t Sum of even numbers : %d",even_sum);
	printf("\n\n\t Sum of odd numbers : %d",odd_sum);
	
}
