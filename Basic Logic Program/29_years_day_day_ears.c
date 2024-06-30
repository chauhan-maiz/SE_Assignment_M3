// convert years into days and days into years 

#include<stdio.h>
main()
{
	int y,days;
	printf("\n\n\t Enter years to convert: ");
	scanf("%d",&y);
	
	days=y*365;
	printf("\n\n\t %d years into days are: %d",y,days);
	
	printf("\n\n\t Enter days to convert: ");
	scanf("%d",&days);
	
	y=days/365;
	printf("\n\n\t %d days into years are: %d",days,y);
}
