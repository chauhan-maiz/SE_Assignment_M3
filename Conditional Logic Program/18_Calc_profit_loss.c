// Calculate Profit Loss 


#include<stdio.h>
main()
{
	int cost_price,sell_price,plam;
	printf("\n\n\t Enter your cost price: ");
	scanf("%d",&cost_price);
	
	printf("\n\n\t Enter your sell price: ");
	scanf("%d",&sell_price);
	
	if(cost_price>sell_price)
	{
		plam=cost_price-sell_price;
		printf("\n\n\t Your loss amount is: %d",plam);
	}
		
	else if(cost_price<sell_price)
	{
		plam=sell_price-cost_price;
		printf("\n\n\t Your profit amount is: %d",plam);
	}
		
	else 
		printf("\n\n\t You are in no profit, no loss condition.");
}
