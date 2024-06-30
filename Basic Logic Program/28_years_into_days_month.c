// years into days and month

#include<stdio.h>
main()
{
	int y,days,month;
	printf("\n\n\t Enter years to convert: ");
	scanf("%d",&y);
	
	days=y*365;
	printf("\n\n\t %d years into days are: %d",y,days);
	
	month=y*12;
	printf("\n\n\t %d years into months are: %d",y,month);
}
