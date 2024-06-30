// Clculate gross salary 

#include<stdio.h>
main()
{
	int bsal;
	float hra,da,gsal;
	printf("\n\n\t Enter your basic salary: ");
	scanf("%d",&bsal);
	
	if(bsal<=10000)
	{
		hra=bsal*0.2;
		da=bsal*0.8;
	}
	else if(bsal<=20000)
	{
		hra=bsal*0.25;
		da=bsal*0.9;
	}
	else
	{
		hra=bsal*0.3;
		da=bsal*0.95;
	}
	gsal=bsal+hra+da;
	
	printf("\n\n\t Your Gross Salary is: %.2f",gsal);
	
	
}
