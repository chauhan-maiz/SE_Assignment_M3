// Wap to print 1 to 50

#include<stdio.h>
main()
{
	int r,c,i;
	
	for (i=1;i<=50;i++)
	{
		for(r=0;r<=i;r++)
		{
			for(c=0;c<=r;c++)
			{
				printf(" %d",i);
			}
		}
		
	}
}
