//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int n,a,b;
	
	printf("Enter the Number: ");
	scanf("%d",&n);


	for(a=1;a<=n;a++)
	{
		printf("(");
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		if(b<a)
			printf("+");
		else if(b==n)
			printf(")");
		else if(b==a)
			printf(")+");
		
		}		
	}	
}
