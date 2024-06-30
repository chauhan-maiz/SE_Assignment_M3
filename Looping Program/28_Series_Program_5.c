//28. 1 2 3 6 9 18 27 54...

#include<stdio.h>
main()
{
	int i,n,w=3,q,j;
	
	printf("Enter the number=");
	scanf("%d",&n);
	
	for(i=1,j=2;i<=n,j<=n;i++,j++)
	{
		printf("%d %d",i*w,j*w);
	}
}
