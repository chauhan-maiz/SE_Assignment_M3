// Wap to check given year is leap year or not

#include<stdio.h>
main()
{
	int y;
	printf("\n\n\t Enter a years: ");
	scanf("%d",&y);
	
	if(y%400==0)
		printf("\n\n\t %d year is a leap year.",y);
	else if(y%100==0)
		printf("\n\n\t %d year is not leap year",y);
	else if(y%4==0)
		printf("\n\n\t %d year is leap year",y);
	else
		printf("%d year is not leap year",y);
}
