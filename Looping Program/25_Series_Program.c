//Wap to (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) series 

#include<stdio.h>
main()
{
	int i,n;
	printf("\n\n\t Enter a number to print Series: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("(%d+%d) + ",i,i);
	}
}
