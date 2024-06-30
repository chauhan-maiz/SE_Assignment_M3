//11.accept 5 numbers from user and display in reverse order 

#include<stdio.h>
main()
{
	int num[5],r,j,rem,temp=0;
	
	for(r=0;r<5;r++)
	{
		printf("\n\n\t Enter the Number[%d]=",r+1);
		scanf("%d",&num[r]);			
	}		
	for(r=0;r<5;r++)
	{
		printf("\n\n\t %d",num[r]);			
	}
	
	
	
	printf("\n\n\t---------Revrse------------\n");
	
	for(r=4;r>=0;r--)
	{
		printf("\n\n\t Reverse order[%d]: %d",r+1,num[r]);
	}
}
