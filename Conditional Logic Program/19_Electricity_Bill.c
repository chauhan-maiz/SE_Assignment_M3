// Electricity bill

#include<stdio.h>

main()
{
	int cusid,conu;
	char cusname[20];
	float chg,surchg,gamt,namt;
	
	printf("\n\n\t Enter Customer ID: ");
	scanf("%d",&cusid);
	printf("\n\n\t Enter Customer Name: ");
	scanf("%s",&cusname);
	printf("\n\n\t Enter Consumed Units: ");
	scanf("%d",&conu);
	
	if(conu<350)
		chg=1.20;
	else if(conu>=350 && conu<600)
		chg=1.50;
	else if(conu>=600 && conu<800)
		chg=1.80;
	else
		chg=2.00;
		
	gamt=conu*chg;
	if(gamt>800)
		surchg=gamt*18/100.0;
		
	namt=surchg+gamt;
	if(namt<256)
		namt=256;
	
	printf("\n\n\t----------Electricity Bill-------------------");
	printf("\n\n\t ------------------------------------------");
	printf("\n\n\t Customer Name: %s",cusname);
	printf("\n\n\t Customer ID: %d",cusid);
	printf("\n\n\t Consumed Units: %d",conu);
	printf("\n\n\t Charges @.%.2f per unit: %.2f",chg,gamt);
	printf("\n\n\t surcharges: %.2f",surchg);
	printf("\n\n\t Net Amount: %.2f",namt);
}
