//19. Patterns-3

#include<stdio.h>
main()
{
	int r,c,a,s;
	
	for(r=1;r<=5;r++)
	{
		for(s=4;s>=r;s--)
		{
			printf("  ");
			
		}
			for(c=1;c<=r;c++)
			{
				printf(" *  ");
			}
		printf("\n");
	}
	
}
