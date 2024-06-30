// Wap to make addition, subtraction,multi. of 2D matrix

#include<stdio.h>
main()
{
	int arr1[3][3],arr2[3][3],r,c;
	int mul[3][3],k;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter 1st Array Elements[%d][%d]: ",r,c);
			scanf("%d",&arr1[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Enter 2nd Array Elements[%d][%d]: ",r,c);
			scanf("%d",&arr2[r][c]);
		}
	}
	printf("\n\n\t ------------------Matrix: 1------------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",arr1[r][c]); 
		}
		printf("\n");
	}
	
	printf("\n\n\t ------------------Matrix: 2------------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",arr2[r][c]); 
		}
		printf("\n");
	}
	
	printf("\n\n\t ------------------Addition:------------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",arr1[r][c]+arr2[r][c]); 
		}
		printf("\n");
	}
	
	printf("\n\n\t ------------------Subtraction:------------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",arr1[r][c]-arr2[r][c]); 
		}
		printf("\n");
	}
	
	printf("\n\n\t ------------------Multiplication:------------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mul[r][c]=0;
			for(k=0;k<3;k++)
			{
				mul[r][c]+=arr1[r][k]*arr2[k][c];
					
			} 
		}
		printf("\n");
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",mul[r][c]);
		}
		printf("\n");
	}
}
