//15.Sort array in ascending order.

#include<stdio.h>
main()
{
	int arr[5],i,n,temp=0,j;
	
	for(i=0;i<5;i++)
	{
		printf("\n\t Enter Array Element[%d]: ",i+1);
		scanf("%d",&arr[i]);	
	}
	
	printf("\n\n\t ------------Before Shorting-----------------\n");		
	for(i=0;i<5;i++)
	
	{
		printf("\n\n\t Arrar Element[%d]: %d",i+1,arr[i]);
	}	
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}
	
	printf("\n\n\t----------Short in asceding order------------------------\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
	}
	
}
