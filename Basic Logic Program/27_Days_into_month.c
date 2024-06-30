// Convert Days into Months

#include<stdio.h>
main()
{
	int day,month;
	printf("\n\n\t Enter the Days: ");
	scanf("%d",&day);
	
	month=day/30;
	printf("\n\n\t %d days into month is: %d",day,month);
}
