//Wap to 1 + 2 + 3 + 4 + 5 + ... + n series 

#include<stdio.h>
main()
{
	int i,n;
	printf("\n\n\t Enter a number to print Series: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d + ",i);
	}
}
