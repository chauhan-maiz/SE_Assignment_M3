//19. Patterns-5

#include<stdio.h>
main()
{
	int r,c,i=1;
	
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			printf("%d ",i);
			i++;
			c++;
		}
		printf("\n");
		r++;
	}
		

		
}
