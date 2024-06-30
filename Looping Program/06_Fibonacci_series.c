// wap to print fibonacci series

#include<stdio.h>
main()
{
	int n,i,a,b,c;
	printf("\n\n\t Enter a number to print fibonacci series: ");
	scanf("%d",&n);
	
	a=0;
	b=1;
	printf("\n\n\t %d %d",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
}
