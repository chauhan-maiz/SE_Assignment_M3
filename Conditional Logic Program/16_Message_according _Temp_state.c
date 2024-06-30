// read temperature in centigrade and display a suitable message

#include<stdio.h>
main()
{ 
	int temp;
	printf("\n\n\t Input Temprature : ");
	scanf("%d",&temp);
	
	if(temp<0)
		printf("\n\n\t Freezing Weather.");
	else if(temp>=0 && temp<=10)
		printf("\n\n\t Weather is very cold.");
	else if(temp>10 && temp<=20)
		printf("\n\n\t Weather is cold.");
	else if(temp>20 && temp<=30)
		printf("\n\n\t Weather is normal.");
	else if(temp>30 && temp<40)
		printf("\n\n\t Weather is hot.");
	else 
		printf("\n\n\t Weather is very hot.");	
} 
