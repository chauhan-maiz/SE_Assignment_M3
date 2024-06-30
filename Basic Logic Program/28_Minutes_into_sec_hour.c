//Convert minutes into second and hours

#include<stdio.h>
main()
{
	int min,sec,hr;
	printf("\n\n\t Enter minutes: ");
	scanf("%d",&min);
	
	sec=min*60;
	printf("\n\n\t %d minutes into second is: %d",min,sec);
	
	hr=min/60;
	printf("\n\n\t %d minutes into hour is: %d",min,hr);
}
