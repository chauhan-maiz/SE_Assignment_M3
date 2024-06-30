// categorize person according to their height

#include<stdio.h>
main()
{
	int h;
	printf("\n\n\t Enter your height(in centimeter): ");
	scanf("%d",&h);
	
	if(h<150)
		printf("\n\n\t Your height is small.");
	else if(h<185)
		printf("\n\n\t Your height is avarage.");
	else 
		printf("\n\n\t Your height is tall.");
}
