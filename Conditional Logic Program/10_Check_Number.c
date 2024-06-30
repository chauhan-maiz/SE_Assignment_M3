// Check number is positive, nagetive or zero

#include<stdio.h>
main()
{
	int n1;
	printf("\n\n\t Enter a number to check: ");
	scanf("%d",&n1);
	
	if(n1==0)
		printf("\n\n\t You entered Zero.");
	else if(n1>0)
		printf("\n\n\t You entered positive number.");
	else 
		printf("\n\n\t You entered nagetive number.");
}
