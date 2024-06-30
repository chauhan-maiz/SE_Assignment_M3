//16.sum of array.

#include<stdio.h>
main()
{
	int arr[5],i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter Array Element[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
	}
	
		
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	
	
	printf("\n\n\t Sum of Array Elements: %d",sum);
	
	
}
