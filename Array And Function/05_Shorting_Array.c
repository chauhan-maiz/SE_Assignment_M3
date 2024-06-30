/* Wap to take 2 array input from user and short them ascending or descending 
order as per user choise*/

#include<stdio.h>
main()
{
	int arr[2],i,j,temp=0;
	char ch;
	
	for(i=0;i<2;i++)
	{
		printf("\n\n\t Enter Array Element[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n\t Before Shorting--------------------");
	
	for(i=0;i<2;i++)
	{
		printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
	}
	
	printf("\n\n\t Short Array in ascending order(y)/for Descending(n): ");
	scanf("%d",&ch);
	
	if(ch=='y')
	{
		for(i=0;i<2;i++)
		{
			for(j=i+1;j<2;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;	
				}
				
			}
		}
		printf("\n\n\t ---------------Ascending order--------------");
		for(i=0;i<2;i++)
		{
			printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
		}
	}
	else 
	{
		for(i=0;i<2;i++)
		{
			for(j=i+1;j<2;j++)
			{
				if(arr[i]<arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;	
				}
				
			}
		}
		printf("\n\n\t--------------Descending Order--------------");
		for(i=0;i<2;i++)
		{
			printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
		}
	}
}

