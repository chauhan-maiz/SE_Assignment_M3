// Dedujct insurace premium and loan isntallment from salary 

#include<stdio.h>
main()
{
	int msal,rsal;
	float ip,li;
	printf("\n\n\t Enter your monthly salary : ");
	scanf("%d",&msal);
	
	ip=msal*0.1;  // 0.1=10/100
	printf("\n\n\t Insurance Premium is: %f",ip);
	li=msal*0.1;
	printf("\n\n\t loan insurance is: %f",li);
	
	rsal=msal-ip-li;
	printf("\n\n\t Your remaining salary is: %d",rsal);
		
}
