// print 1 to 100 in pattern
#include<stdio.h>
main()
{
	int r,c,a=1;

	for(r=0;r<10;r++)
	{
		for(c=0;c<10;c++)
		{
			printf("\t%d",a);
			a++;
		}
		printf("\n");
		
	}
}
