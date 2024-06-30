// Find even or odd using ternary op.

#include<stdio.h>
main()
{
	int a;
	printf("\n\n\t Enter a number: ");
	scanf("%d",&a);
	
	a%2==0?printf("\n\n\t Number is Even."):printf("\n\n\t Number is odd.");
}
