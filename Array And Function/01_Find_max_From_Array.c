// Write a program to find out the max number from given array using function

#include<stdio.h>
void find_max();

main()
{
	 find_max();
	
}

void find_max()
{
	int arr[20],i,n,max;
	printf("\n\n\t Enter a number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Enter Array Elepments: ");
		scanf("%d",&arr[i]);
	}
	
	max=0;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	printf("\n\n\t Maximum Number From Array is: %d",max);
	
}
