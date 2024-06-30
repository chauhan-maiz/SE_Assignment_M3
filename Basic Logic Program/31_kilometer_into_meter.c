//31. convert kilometer into meter

#include<stdio.h>
main()
{
	int km,m;
	printf("\n\n\t Enter Kilometer to convert: ");
	scanf("%d",&km);
	
	m=km*1000;
	printf("\n\n\t %d Kilometer into meter is: %d",km,m);
}
