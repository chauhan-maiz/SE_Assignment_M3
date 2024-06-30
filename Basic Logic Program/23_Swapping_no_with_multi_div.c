// Swap 2 numbers using multiplication and division 

#include<stdio.h>
main()

{
	int a,b;
	printf("\n\n\t Enter any two values: ");
	scanf("%d %d",&a,&b);
	printf("\n\n\t ........... Before Swapping..............");
	printf("\n\n\t a=%d b=%d",a,b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("\n\n\t ............ After Swapping.................");
	printf("\n\n\t a=%d b=%d",a,b);
}
