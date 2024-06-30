// swap 2 number using 3rd variable & without 3rd variable

#include<stdio.h>
main()

{
	int a,b,c;
	printf("\n\n\t Enter any two value: ");
	scanf("%d %d",&a,&b);
	
	printf("\n\n\t ............. Before Swaping..............");
	printf("\n\n\t a=%d b=%d",a,b);
// swapig with 3d variable	
	c=a;
	a=b;
	b=c;
	
	printf("\n\n\t .............Swaping with 3rd variable...............");
	printf("\n\n\t a=%d b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n\t ............. Swaping without 3rd vaiable.............");
	printf("\n\n\t a=%d b=%d",a,b);
	
}
