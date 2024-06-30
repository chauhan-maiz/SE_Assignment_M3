//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n

#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("Enter the Number=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==1)
			printf(" %d/%d ",i,i+1);
		else if(i%2==0)
			printf("- %d/%d ",i,i+1);
		else
			printf("+ %d/%d ",i,i+1);
	}
}
