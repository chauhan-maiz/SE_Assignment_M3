// Find maximum number using ternary op

#include<stdio.h>
main()
{
	int n1,n2,n3,max;
	printf("\n\n\t Enter three Numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	max=(n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
	printf("\n\n\t maximum number is: %d",max);
}
