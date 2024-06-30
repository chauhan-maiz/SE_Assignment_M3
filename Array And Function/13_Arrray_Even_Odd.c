//13.accept 5 numbers from user and check numbers is even or odd 


#include<stdio.h>
main()
{
	int arr[5],i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);	
		printf("\n\n\t Enter Array Element[%d]: ",i+1);
	}	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);	
	}
	
	printf("\n\n\t ------------Even Numbers-------------\n");
	
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
			printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
	}
	
	printf("\n\n\t ------------Odd Numbers-------------\n");
	
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
			printf("\n\n\t Array Element[%d]: %d",i+1,arr[i]);
	}
} 
