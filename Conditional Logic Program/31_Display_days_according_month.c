// Display number of days of gven month

#include<stdio.h>
main()
{
	int mno;
	printf("\n\n\t Enter a month to check:");
	scanf("%d",&mno);
	
	switch(mno)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\n\n\t %d Month have 31 days.",mno);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n\n\t %d Month have 30 days.",mno);
			break;
		case 2:
			printf("\n\n\t %d Month have 28 days.",mno);
			printf("\n\n\t In leap year %d Month have 29 days.",mno);
			break;
		default:
			printf("\n\n\t Invalid Month.");
			break;
			
	}
}
